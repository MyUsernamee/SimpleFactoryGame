
#include <raylib-cpp.hpp>

int main () {

    raylib::Window window(800, 450, "raylib-cpp - basic window");
    

    SetTargetFPS(60);

    while(!window.ShouldClose()) {

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();

    }

}