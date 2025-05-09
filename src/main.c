#include <stdio.h>

#include "visualizer.h"

int main(void)
{
    int test[] = {30, 50, 70, 90, 25, 10, 100, 33, 78, 98, 2, 56};
    InitWindow(800, 450, "Hello Raylib!");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        visualizeArray(test, 12);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
