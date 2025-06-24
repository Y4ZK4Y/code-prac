#include "binary_tree.h"

/* find th elongest path down */

int height(t_tree *tree) {
    if (!tree)
        return -1;
    int height_left, height_right;
    height_left = height(tree->left);
    height_right = height(tree->right);

    if (height_left > height_right)
        return 1 + height_left;
    else
        return 1 + height_right;
}

