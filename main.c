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
void displayCanvas() {
    int i, j;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}
void clearCanvas() {
    int i, j;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            canvas[i][j] = '_';
        }
    }
}
int main() {
    int i, j;
    int choice;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            canvas[i][j] = '_';
        }
    }
    printf("1. Rectangle\n");
printf("2. Line\n");
printf("3. Triangle\n");
printf("4. Circle\n");
printf("5. All Shapes\n");
printf("6. Delete All Shapes\n");
printf("7. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);

switch(choice) {
    case 1:
        drawRectangle();
        break;

    case 2:
        drawLine();
        break;

    case 3:
        drawTriangle();
        break;

    case 4:
        drawCircle();
        break;

    case 5:
        drawRectangle();
        drawLine();
        drawTriangle();
        drawCircle();
        break;
case 6:
    clearCanvas();
    printf("All Shapes Deleted\n");
    break;

case 7:
    printf("Exiting Program...\n");
    return 0;
    default:
        printf("Invalid Choice\n");
}

 displayCanvas();
    return 0;
}