#include "Scene.h"

// GLuint g_fontsheet_texture_id;

class LevelMenu : public Scene {
   private:
    GLuint m_fontsheet_texture_id;

   public:
    // ————— CONSTRUCTOR ————— //
    ~LevelMenu();

    // ————— METHODS ————— //
    void initialize(Entity* player, GLuint g_fontsheet_texture_id, float view_x, float view_y) override;
    void update(float delta_time, bool game_status) override;
    void render(ShaderProgram* program) override;
};
