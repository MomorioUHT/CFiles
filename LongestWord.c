#include <stdio.h>
#include <string.h>

#define MAX_WORD 100
#define MAX_WORD_LEN 100

char* longestWord(char words[MAX_WORD][MAX_WORD_LEN], int numWords){
    int maxLength = 0;
    char* longestWord = NULL;
    for (int i=0; i<numWords; i++) {
        if (strlen(words[i]) > maxLength) {
            maxLength = strlen(words[i]);
            longestWord = words[i];
        }
    }
    return longestWord;
}

int main() {
    char words[MAX_WORD][MAX_WORD_LEN];
    int numWords = 0;
    while (1) {
        scanf("\n%s", words[numWords]);
        if (strcmp("exit", words[numWords]) == 0) break;
        numWords++;
    }
    char* longest = longestWord(words, numWords);
    if (longest) {
        printf("Longest word is %s", longest);
    } else {
        printf("There is no words!");
    }
}