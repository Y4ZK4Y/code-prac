#include "binary_tree.h"

/* recursively counts num of nodes in the tree, and adds one for current node */
int tree_size(t_tree *root) {
    if (root != NULL) {
        return (1 + tree_size(root->left) + tree_size(root->right))
    }
    return 0;
}