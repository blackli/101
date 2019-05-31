#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} lnode;

lnode *merge(lnode *one, lnode *two) {
    if (one == NULL) {
        return two;
    }
    if (two == NULL) {
        return one;
    }
    lnode *one_head = one;
    lnode *two_head = two;
    lnode *tmp;
    while (one != NULL && two != NULL) {
        if (one->data < two->data) {
            tmp = one->next;
            one->next = two;
            one = tmp->next;
        } else {
            tmp = two->next;
            two->next = two;
            two = tmp->next;
        }
    }
    if (one_head->data < two_head->data) {
        return one_head;
    } else {
        return two_head;
    }
}

int main()
{


}
