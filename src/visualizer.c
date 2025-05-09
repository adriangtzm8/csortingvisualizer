#include "visualizer.h"

void visualizeArray(int* arr, int len) {
    int barW = 800 / len;
    int max = findMax(arr, len);
    for (int i = 0; i < len; ++i) {
        int height = calculateHeight(arr[i], max);
        DrawRectangle(i * barW, 450 - (450 * height) / 100, barW - 1, (450 * height) / 100, GRAY);
    }
}

int findMax(int* arr, int len) {
    int max = -1;

    for (int i = 0; i < len; ++i) {
        if (max < arr[i]) max = arr[i];
    }

    return max;
}

int calculateHeight(int val, int max) {
    return (val * 100) / max;
}
