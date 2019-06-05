#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} node;

void pre_order(node *root) {
    if (root == NULL) {
        return;
    }
    printf("%d\n", root->data);
    pre_order(root->left);
    pre_order(root->right);
}

int main() {
    node *root = (node *)malloc(sizeof(node));
    root->data = 1;
    node *left = (node *)malloc(sizeof(node));
    left->data = 2;
    node *right = (node *)malloc(sizeof(node));
    right->data = 3;
    root->left = left;
    root->right = right;
    pre_order(root);
    return 0;
}
