#include <stdio.h>

int charcount(char *s) {
    int length = 0;
    while(s[length] != '\0') length++;
    return length;    
}

void charweave(char *s, char *result) {
    int k = 0;
    int resultLen = charcount(s);
    for (int i=0, j= resultLen - 1; i < resultLen || j > 0; i++, j--) {
        result[k++] = s[i];
        result[k++] = s[j];
    }
    result[(resultLen*2)] = '\0';    
}

int main() { 
    char str[100],result[200];
    printf("String: ");
    gets(str);
    charweave(str,result);
    printf("Output: %s\n",result);
    return 0;
}
