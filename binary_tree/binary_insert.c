#include "binary_tree.h"

/* insert a new value into the BST
recursively finds the correct spot and inserts a new value*/

t_tree *insert_tree(t_tree *root, int value) {
    if (!root)
    {
        root = malloc(sizeof(t_tree));
        if (!root)
            return NULL;
        root->value = value;
        root->left = NULL;
        root->right = NULL;
    }
    // if root's value is greater that the new value insert in left
    else if (root->value > value)
        root->left = insert_tree(root->left, value);
    else if (root->value < value)
        root->right = insert_tree(root->right, value);
    return root;
}