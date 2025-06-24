#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_tree {
    int     value;
    struct s_tree *left;
    struct s_tree *right;
}           t_tree;


t_tree *create_node(int value);

#endif