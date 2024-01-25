#include <stdio.h>

int main() {
    int amount, inpcredit;
    int credit[50] = {}, grade[50] = {};
    char inpgrade;
    int allCredits=0;

    printf("Enter number of subject(s): ");
    scanf("%d", &amount);

    for (int i=0; i<amount; i++) {
        printf("Enter credit,grade for subject #%d: ", i+1);
        scanf("%d,%c", &inpcredit,&inpgrade);

        credit[i] = inpcredit;
        allCredits += inpcredit;

        switch (inpgrade) {
            case 'A':
            case 'a':
                grade[i] = 4;
                break;
            case 'B':
            case 'b':
                grade[i] = 3;
                break;
            case 'C':
            case 'c':
                grade[i] = 2;
                break;
            case 'D':
            case 'd':
                grade[i] = 1;
                break;
            case 'F':
            case 'f':
                grade[i] = 0;
                break;
        }
    }
    float uppersum = 0;
    for (int i = 0; i<amount; i++) { uppersum += (credit[i]*grade[i]); }
    printf("GPA = %.2f", uppersum/allCredits);
    return 0;
}
