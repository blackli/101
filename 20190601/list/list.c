#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} lnode;

lnode *get_last_node(lnode *header, int n) {
    // set n step
    lnode *fast_node = header;
    for (; n > 0; n--) {
        if (fast_node->next == NULL) {
            return NULL;
        }
        fast_node = fast_node->next;
    }

    lnode *slow_node = header;
    while (fast_node != NULL && fast_node->next != NULL) {
        fast_node = fast_node->next;
        slow_node = slow_node->next;
    }
    return slow_node;
}

int main() {
    return 0;
}
