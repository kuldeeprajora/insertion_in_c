#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

int findMin(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int main() {
    struct Node* root = newNode(5);
    root->left = newNode(3);
    root->right = newNode(8);
    root->left->left = newNode(2);
    root->left->right = newNode(4);

    int minValue = findMin(root);
    printf("Minimum value in the BST: %d\n", minValue);

    return 0;}
    