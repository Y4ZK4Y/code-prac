#include <limits.h>
#include "binary_tree.h"

/* sums all node values */
int tree_add(t_tree *tree) {
    int sum;
    int sum_left;
    int sum_right;
    sum = 0;
    sum_left = 0;
    sum_right = 0;
    if (!tree) 
        return 0;
    sum = tree->value;
    if (tree->left)
        sum_left += tree_add(tree->left);
    if (tree->right)
        sum_right += tree_add(tree->right);
    sum = sum + sum_left + sum_right;
    return sum;
}
