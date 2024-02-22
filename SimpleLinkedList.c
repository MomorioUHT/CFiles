#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} node;

void printList(node *pList) {
    while (pList != NULL) {
        printf("%d ", pList->data);
        pList = pList->next;
    }
    printf("\n");
}

void insertNode(node **pList, int value) {
    node *dummy = (node *)malloc(sizeof(node));

    dummy->data = value;
    dummy->next = NULL;

    if (*pList == NULL || value < (*pList)->data) {
        dummy->next = *pList;
        *pList = dummy; // Update the head pointer
    } else {
        node *current = *pList;
        while (current->next != NULL && current->next->data < value) {
            current = current->next;
        }
        dummy->next = current->next;
        current->next = dummy;
    }
}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }

    printList(pList);
}