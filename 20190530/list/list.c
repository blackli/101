#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} lnode;

int has_circle(lnode *header) {
    if (header == NULL) {
        return 0;
    }
    lnode *slow = header;
    lnode *fast = header;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }
    return 0;
}

int main() {
    return 0;
}
