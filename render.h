#include <stdio.h>

#define HEIGHT  20
#define WIDTH   70

char display[HEIGHT][WIDTH];

void populate (char infill) {
    for (int row = 0; row < HEIGHT; row++) {
        for (int col = 0; col < WIDTH; col++) {
            display[row][col] = infill;
        }
    }
}

void show () {
    for (int row = 0; row < HEIGHT; row++) {
        for (int col = 0; col < WIDTH; col++) {
            printf("%c", display[row][col]);
        }
        printf("\n");
    }
}

void drawChar (int row, int col, char input) {
    display[row][col] = input;
}