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
int main() {
    int i, j;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            canvas[i][j] = '_';
        }
    }
    drawRectangle();

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }

    return 0;
}