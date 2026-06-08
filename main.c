#include <stdio.h>

#define ROWS 10
#define COLS 20

char canvas[ROWS][COLS];
void drawRectangle() {
    int i, j;

    for(i = 2; i <= 5; i++) {
        for(j = 4; j <= 10; j++) {
            canvas[i][j] = '*';
        }
    }
}
void drawLine() {
    int i;

    for(i = 2; i <= 8; i++) {
        canvas[i][15] = '*';
    }
}

void drawTriangle() {
    canvas[2][17] = '*';

    canvas[3][16] = '*';
    canvas[3][18] = '*';

    canvas[4][15] = '*';
    canvas[4][16] = '*';
    canvas[4][17] = '*';
    canvas[4][18] = '*';
    canvas[4][19] = '*';
}

void drawCircle() {
    canvas[7][17] = '*';
    canvas[6][16] = '*';
    canvas[6][18] = '*';
    canvas[8][16] = '*';
    canvas[8][18] = '*';
}
int main() {
    int i, j;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            canvas[i][j] = '_';
        }
    }
    drawRectangle();
    drawLine();
    drawTriangle();
    drawCircle();

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }

    return 0;
}