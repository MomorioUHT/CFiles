#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(char Board[BOARD_SIZE][BOARD_SIZE], int x, int y) {
    for (int i = 1; i < BOARD_SIZE; i++) {
        if (x + i < BOARD_SIZE && y + i < BOARD_SIZE) Board[y + i][x + i] = 'X';
        if (x - i >= 0 && y + i < BOARD_SIZE) Board[y + i][x - i] = 'X';
        if (x + i < BOARD_SIZE && y - i >= 0) Board[y - i][x + i] = 'X';
        if (x - i >= 0 && y - i >= 0) Board[y - i][x - i] = 'X';
    }
    Board[y][x] = 'B';
}

int main() {
    char Board[BOARD_SIZE][BOARD_SIZE] = { };
    int pos_x,pos_y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d",&pos_x,&pos_y);

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            Board[i][j] = ' ';   
        }
    }


    bishopMoves(Board, pos_x, pos_y);

    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c|", Board[i][j]);
        }
        printf("\n------------------\n");
    }

    return 0;
}