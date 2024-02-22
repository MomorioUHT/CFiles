#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} node;

void printList(node *pList) {
    printf("[ ");
    while (pList != NULL) {
        printf("%d ", pList->data);
        pList = pList->next;
    }
    printf("]\n");
}

void insertNode(node **pList, int value) {
    node *dummy = (node *)malloc(sizeof(node));

    dummy->data = value;
    dummy->next = NULL;

    if (*pList == NULL || value < (*pList)->data) {
        dummy->next = *pList;
        *pList = dummy;
    } else {
        node *current = *pList;
        while (current->next != NULL && current->next->data < value) {
            current = current->next;
        }
        dummy->next = current->next;
        current->next = dummy;
    }    
}

void removeNode(node **pList, int value) {
    node* current = *pList;
    node* previous = NULL;

    while (current != NULL && current->data == value) {
        *pList = current->next;
        free(current);
        current = *pList;
    }

    while (current != NULL) {
        if (current->data == value) {
            previous->next = current->next;
            free(current);
            current = previous->next;
        } else {
            previous = current;
            current = current->next;
        }
    }
}

int main() {

    node *pList = NULL;

    while (69420) {
        char command[2];
        int inputValue;
        printf("input> ");
        scanf("%s",&command);

        if (strcmp(command, "p") == 0) printList(pList); 
        else if (strcmp(command, "q") == 0) break;     
        else if (strcmp(command, "i") == 0) {
            scanf("%d", &inputValue);
            insertNode(&pList, inputValue);
        } else if (strcmp(command, "d") == 0) {
            scanf("%d", &inputValue);
            removeNode(&pList, inputValue);
        }
    }
}