#include <stdio.h>
#include <math.h>

#define HEIGHT  50
#define WIDTH   100

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

void drawLine (int row1, int col1, int row2, int col2, char infill) {
    float slope = ((float)(row2 - row1)) / ((float)(col2 - col1));
    float yIntercept = (float)row1 - slope*(float)col1;

    for (float col = col1; col <= col2; col += 1) {
        int row = ceil(slope*col + yIntercept);

        display[row][(int)col] = infill;
    }
}