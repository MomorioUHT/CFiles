#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int n,x,y;
    int board[BOARD_SIZE][BOARD_SIZE] = { };
    char piece;

    for (int i = 0; i < BOARD_SIZE; i++) {
    for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';   
    }
    }

    scanf("\n%d", &n);

    for (int i=0; i<n; i++) {
    scanf("\n%c(%d, %d)", &piece, &x, &y);
    setPieceOnTable(board, piece, x, y);
    }

    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c|", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos )
{
    board[yPos][xPos] = piece;
}