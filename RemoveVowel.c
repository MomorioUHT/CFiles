#include <stdio.h>

int remove_vowel(char str[]){
    int i,j, stringLen = 0;
    while (str[stringLen] != '\0') stringLen++;

    for (i = 0; i < stringLen; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
        for (j = i; j < stringLen; j++) {
            str[j] = str[j + 1];
        }
        i--;
        stringLen--;
    }
    str[stringLen + 1] = '\0';
    }
}

int main()
{  
    char str[80];

    printf(" Input: ");
    fgets(str, 80, stdin);

    remove_vowel(str);
    printf("Output: %s\n",str);

    return 0;
}