#include "raylib.h"
#include "Editor.h"

int main()
{
    // Init Window
    InitWindow(800, 800, "Pixel Editor");
    SetTargetFPS(144);

    Editor editor;
    editor.Setup();

    // Main game loop
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        editor.Update();
        
        EndDrawing();
    }
    CloseWindow();

    return 0;
}