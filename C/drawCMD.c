#include <stdio.h> 
#include <stdlib.h> 

void drawCMD(int pos_x, int pos_y);

void main() {
    drawCMD(30, 15);
}

void drawCMD(int pos_x, int pos_y) {
    printf("\n");
    for (int y = 0; y < pos_y; y++) {
        for (int x = 0; x < pos_x; x++) {
            if (y == 0 || y == pos_y - 1 || x == 0 || x == pos_x - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}