#include "binary_tree.h"

/*
finds the largest value in the tree 
null for no data found - int_min for no tree
*/

int biggest_num(t_tree *tree) {
    if (!tree)
        return INT_MIN;

    int max, left, right;

    max = tree->value;
    left = biggest_num(tree->left);
    right = biggest_num(tree->right);

    if (left > max )
        max = left;
    if (right > max)
        max = right;
    return max;
}