#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} lnode;

lnode *get_mid_node(lnode *header) {
    int length;
    lnode *ptr = header;
    for (length = 0; ptr != NULL; ptr = ptr->next) {
        length++;
    }
    for (ptr = header; length > 0 ; length--) {
        ptr = ptr->next;
    }
    return ptr;
}

int main() {
    return 0;
}
