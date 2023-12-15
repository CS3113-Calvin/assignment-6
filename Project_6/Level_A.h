#include "Scene.h"
#include <vector>

class LevelA : public Scene {
   public:
    // ————— STATIC ATTRIBUTES ————— //
    int ENEMY_COUNT = 1;

    // ————— CONSTRUCTOR ————— //
    ~LevelA();

    // ————— METHODS ————— //
    void initialize(Entity* player, GLuint g_fontsheet_texture_id, float view_x, float view_y) override;
    void update(float delta_time) override;
    void render(ShaderProgram* program) override;
};
