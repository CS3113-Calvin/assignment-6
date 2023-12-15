/**
 * Author: Calvin Tian
 * Assignment: Rise of the AI
 * Date due: 2023-11-18, 11:59pm
 * I pledge that I have completed this assignment without
 * collaborating with anyone else, in conformance with the
 * NYU School of Engineering Policies and Procedures on
 * Academic Misconduct.
 **/

#include "Map.h"

#include <set>

Map::Map(int width, int height, std::pair<int, int> *level_data, GLuint texture_id, float tile_size, int tile_count_x, int tile_count_y) {
    // Map::Map(int width, int height, unsigned int *level_data, GLuint texture_id, float tile_size, int tile_count_x, int tile_count_y) {
    m_width  = width;
    m_height = height;

    m_level_data = level_data;
    m_texture_id = texture_id;

    m_tile_size    = tile_size;
    m_tile_count_x = tile_count_x;
    m_tile_count_y = tile_count_y;

    build();
}

void Map::build() {
    // Since this is a 2D map, we need a nested for-loop
    for (int y_coord = 0; y_coord < m_height; y_coord++) {
        for (int x_coord = 0; x_coord < m_width; x_coord++) {
            // Get the current tile
            int tile = m_level_data[y_coord * m_width + x_coord].first;
            int flip = m_level_data[y_coord * m_width + x_coord].second;

            // If the tile number is 0 i.e. not solid, skip to the next one
            if (tile == 0) continue;

            // Otherwise, calculate its UV-coordinated
            float u_coord = (float)(tile % m_tile_count_x) / (float)m_tile_count_x;
            float v_coord = (float)(tile / m_tile_count_x) / (float)m_tile_count_y;

            // And work out their dimensions and posititions
            float tile_width  = 1.0f / (float)m_tile_count_x;
            float tile_height = 1.0f / (float)m_tile_count_y;

            float x_offset = -(m_tile_size / 2);  // From center of tile
            float y_offset = (m_tile_size / 2);   // From center of tile

            // So we can store them inside our std::vectors
            m_vertices.insert(m_vertices.end(), {x_offset + (m_tile_size * x_coord), y_offset + -m_tile_size * y_coord,
                                                    x_offset + (m_tile_size * x_coord), y_offset + (-m_tile_size * y_coord) - m_tile_size,
                                                    x_offset + (m_tile_size * x_coord) + m_tile_size, y_offset + (-m_tile_size * y_coord) - m_tile_size,
                                                    x_offset + (m_tile_size * x_coord), y_offset + -m_tile_size * y_coord,
                                                    x_offset + (m_tile_size * x_coord) + m_tile_size, y_offset + (-m_tile_size * y_coord) - m_tile_size,
                                                    x_offset + (m_tile_size * x_coord) + m_tile_size, y_offset + -m_tile_size * y_coord});

            // Flip the texture coordinates based on flip status
            if (flip == 0) {
                m_texture_coordinates.insert(m_texture_coordinates.end(), {u_coord, v_coord,
                                                                           u_coord, v_coord + (tile_height),
                                                                           u_coord + tile_width, v_coord + (tile_height),
                                                                           u_coord, v_coord,
                                                                           u_coord + tile_width, v_coord + (tile_height),
                                                                           u_coord + tile_width, v_coord});
            } else if (flip == 1) {
                m_texture_coordinates.insert(m_texture_coordinates.end(), {(u_coord + tile_width), v_coord,
                                                                           (u_coord + tile_width), v_coord + (tile_height),
                                                                           (u_coord), v_coord + (tile_height),
                                                                           (u_coord + tile_width), v_coord,
                                                                           (u_coord), v_coord + (tile_height),
                                                                           (u_coord), v_coord});
            } else if (flip == 2) {
                m_texture_coordinates.insert(m_texture_coordinates.end(), {(u_coord), v_coord + (tile_height),
                                                                           (u_coord), v_coord,
                                                                           (u_coord + tile_width), v_coord,
                                                                           (u_coord), v_coord + (tile_height),
                                                                           (u_coord + tile_width), v_coord,
                                                                           (u_coord + tile_width), v_coord + (tile_height)});
            } else if (flip == 3) {
                m_texture_coordinates.insert(m_texture_coordinates.end(), {(u_coord + tile_width), v_coord + (tile_height),
                                                                           (u_coord + tile_width), v_coord,
                                                                           (u_coord), v_coord,
                                                                           (u_coord + tile_width), v_coord + (tile_height),
                                                                           (u_coord), v_coord,
                                                                           (u_coord), v_coord + (tile_height)});
            } else {
            }
            // m_texture_coordinates.insert(m_texture_coordinates.end(), {u_coord, v_coord,
            //                                                            u_coord, v_coord + (tile_height),
            //                                                            u_coord + tile_width, v_coord + (tile_height),
            //                                                            u_coord, v_coord,
            //                                                            u_coord + tile_width, v_coord + (tile_height),
            //                                                            u_coord + tile_width, v_coord});
        }
    }

    // The bounds are dependent on the size of the tiles
    m_left_bound   = 0 - (m_tile_size / 2);
    m_right_bound  = (m_tile_size * m_width) - (m_tile_size / 2);
    m_top_bound    = 0 + (m_tile_size / 2);
    m_bottom_bound = -(m_tile_size * m_height) + (m_tile_size / 2);
}

void Map::render(ShaderProgram *program) {
    glm::mat4 model_matrix = glm::mat4(1.0f);
    program->set_model_matrix(model_matrix);

    glUseProgram(program->get_program_id());

    glVertexAttribPointer(program->get_position_attribute(), 2, GL_FLOAT, false, 0, m_vertices.data());
    glEnableVertexAttribArray(program->get_position_attribute());
    glVertexAttribPointer(program->get_tex_coordinate_attribute(), 2, GL_FLOAT, false, 0, m_texture_coordinates.data());
    glEnableVertexAttribArray(program->get_tex_coordinate_attribute());

    glBindTexture(GL_TEXTURE_2D, m_texture_id);

    glDrawArrays(GL_TRIANGLES, 0, (int)m_vertices.size() / 2);
    glDisableVertexAttribArray(program->get_position_attribute());
    glDisableVertexAttribArray(program->get_position_attribute());
}

bool Map::is_solid(glm::vec3 position, float *penetration_x, float *penetration_y) {
    // Transparent tileids are not solid
    std::set<int> transparent = {0, 32, 33, 34, 35, 38, 44, 45, 46, 47, 56, 57, 58, 59, 64, 65, 66, 67, 68, 77, 78, 79, 84, 96, 97, 98, 106, 108, 109, 110, 111, 118, 120, 121, 122, 123, 125, 126, 127, 132, 133, 134, 147, 148, 169, 181, 228, 229, 230, 240, 241, 242, 252, 264, 276, 288};

    // The penetration between the map and the object
    // The reason why these are pointers is because we want to reassign values
    // to them in case that we are colliding. That way the object that originally
    // passed them as values will keep track of these distances
    // inb4: we're passing by reference
    *penetration_x = 0;
    *penetration_y = 0;

    // If we are out of bounds, it is not solid
    if (position.x < m_left_bound || position.x > m_right_bound) return false;
    if (position.y > m_top_bound || position.y < m_bottom_bound) return false;

    int tile_x = floor((position.x + (m_tile_size / 2)) / m_tile_size);
    int tile_y = -(ceil(position.y - (m_tile_size / 2))) / m_tile_size;  // Our array counts up as Y goes down.

    // If the tile index is negative or greater than the dimensions, it is not solid
    if (tile_x < 0 || tile_x >= m_width) return false;
    if (tile_y < 0 || tile_y >= m_height) return false;

    // If the tile index is 0 i.e. an open space, it is not solid
    int tile = m_level_data[tile_y * m_width + tile_x].first;
    // int tile = m_level_data[tile_y * m_width + tile_x];
    // if (tile == 0) return false;
    // check if tile is in transparent set
    if (transparent.find(tile) != transparent.end()) return false;
    return false;

    // And we likely have some overlap
    float tile_center_x = (tile_x * m_tile_size);
    float tile_center_y = -(tile_y * m_tile_size);

    // And because we likely have some overlap, we adjust for that
    *penetration_x = (m_tile_size / 2) - fabs(position.x - tile_center_x);
    *penetration_y = (m_tile_size / 2) - fabs(position.y - tile_center_y);

    return true;
}

bool const Map::get_is_on_ladder(glm::vec3 position) const {
    std::set<int> ladders = {66, 78, 67, 79};

    int tile = get_current_tile(position);

    if (ladders.find(tile) != ladders.end()) return true;
    return false;
};

bool const Map::get_is_in_water(glm::vec3 position) const {
    std::set<int> water = {84, 96, 97, 98, 108, 109, 110, 111, 120, 121, 122, 123, 132, 133, 134, 169, 181};

    int tile = get_current_tile(position);

    if (water.find(tile) != water.end()) return true;
    return false;
};

int const Map::get_current_tile(glm::vec3 position) const {
    // return current tileID at position
    int tile_x = floor((position.x + (m_tile_size / 2)) / m_tile_size);
    int tile_y = -(ceil(position.y - (m_tile_size / 2))) / m_tile_size;  // Our array counts up as Y goes down.

    int tile = m_level_data[tile_y * m_width + tile_x].first;

    return tile;
}
