#include "Decor.hpp"
#include "Character.hpp"

#include <iostream>

bool isPlay = false;
int UpdatesPerSecond = 60;

const int screenWidth = 800;
const int screenHeight = 600;

int main()
{
    InitWindow(screenWidth, screenHeight, "RUNTRACK CPP");
    SetTargetFPS(UpdatesPerSecond);


    while (!WindowShouldClose())
    {

        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Update everything

        // Draw everything
        DrawFPS(10, 10);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
