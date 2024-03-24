#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return 1;

    struct ListNode *curr = head;

    //find the listnode length
    int count = 0;
    while (curr) {
        count++;
        curr = curr->next;
    }

    //add the val to array
    curr = head;
    int i = 0;
    int values[count];
    while (curr) {
        values[i] = curr->val;
        curr = curr->next;
        i++;
    }

    //2 pointers
    for (int i=0, j=count-1; i < j; i++, j--) {
        if (values[i] != values[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    return 0;
}