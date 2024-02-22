#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

Node* hashTable[SIZE] = {NULL};

void printHashTable() {
    for (int i=0; i<SIZE; i++) {
        printf("KEY %2d: ", i);
        Node* current = hashTable[i];
        while (current != NULL) {
            printf("%d ",current->item);
            current = current->next;
        }
        printf("\n");
    }
}

void insertNode(int value) {
    Node *dummy = (Node *)malloc(sizeof(Node));

    dummy->item = value;
    dummy->next = NULL;

    int index = value % SIZE;

    if (hashTable[index] == NULL) {
        dummy->next = hashTable[index];
        hashTable[index] = dummy;
    } else {
        dummy->next = hashTable[index];
        hashTable[index] = dummy;
    }    
}

int main() {
    while (69420) {
        char command;
        int inputValue;
        printf("input> ");
        scanf("\n%c",&command);

        if (command == 'p') printHashTable(); 
        else if (command == 'q') break;     
        else if (command == 'a') {
            scanf("%d", &inputValue);
            insertNode(inputValue);
        }
    }
}