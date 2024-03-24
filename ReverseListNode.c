#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *save;
    while (curr) {
        save = curr->next;
        curr->next = prev;
        prev = curr;
        curr = save;
    }
    return prev;
}

int main() {
    return 0;
}