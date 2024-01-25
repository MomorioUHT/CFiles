#include <stdio.h>

void printStairs(int n, int position) {
    for (int i = n; i >= 1; i--) {
        if (i == position) { printf("|-^-|\n"); }
        else if (i == position+1) { printf("|-O-|\n"); }
        else { printf("|---|\n"); }
    }
}

int main() {
    int n,step, round = 1 , position = 1;

    printf("Input number of stairs: ");
    scanf("%d", &n);

    if (n <= 0) { return 0; }

    while (69420) {
        printf("---- round %d ----\n", round);
        if (position >= n) { position = n-1; }
        if (position < 1) { position = 1; } 

        printStairs(n, position);

        printf("Input step command: ");
        scanf("%d", &step);

        if (step == 0) { break; }

        position += step;
        round += 1;
    }
    return 0;
}
