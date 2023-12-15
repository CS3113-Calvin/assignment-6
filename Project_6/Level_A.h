#include <vector>

#include "Scene.h"

class LevelA : public Scene {
   public:
    float m_view_x;
    float m_view_y;

    // ————— STATIC ATTRIBUTES ————— //
    int ENEMY_COUNT = 10;

    // ————— CONSTRUCTOR ————— //
    ~LevelA();

    // ————— METHODS ————— //
    void initialize(Entity* player, GLuint g_fontsheet_texture_id, float view_x, float view_y) override;
    void update(float delta_time, bool game_status) override;
    void render(ShaderProgram* program) override;
};
