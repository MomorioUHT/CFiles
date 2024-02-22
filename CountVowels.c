#include <stdio.h>

int main() {
    char str[50];
    int count = 0;

    printf("String (without a space): ");
    scanf("%s", str);

    int i,j, stringLen = 0;
    while (str[stringLen] != '\0') stringLen++;

    for (i=0; i<stringLen; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]);
            count++;
        }
    }

    if (count == 0 || count == 1) printf("\nThis string contains %d vowel.", count);
    else printf("\nThis string contains %d vowels.", count);
}
