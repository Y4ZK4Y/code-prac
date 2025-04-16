#include "binary_tree.h"

t_tree *create_node(int value) {
    t_tree *result;
    result = malloc(sizeof(t_tree));
    if (result != NULL) {
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

