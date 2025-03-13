
#include "raylib.h"

int main() {
    // Initialize the window
    InitWindow(800, 600, "Raylib C++ Test");
    SetTargetFPS(60);

    // Circle position
    float circleX = 400;
    float circleY = 300;
    float speed = 5.0f;
    Vector2 circlePosition = {circleX, circleY};

    while (!WindowShouldClose()) { // Game loop
        // Move the circle with arrow keys
        if (IsKeyDown(KEY_RIGHT)) circleX += speed;
        if (IsKeyDown(KEY_LEFT)) circleX -= speed;
        if (IsKeyDown(KEY_DOWN)) circleY += speed;
        if (IsKeyDown(KEY_UP)) circleY -= speed;

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Move the circle with arrow keys!", 200, 50, 20, DARKGRAY);
        DrawCircleV(circlePosition, 25, BLUE);
        EndDrawing();
    }

    // Cleanup
    CloseWindow();
    return 0;
}
