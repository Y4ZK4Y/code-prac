// Binary Trees!
// nodes - lnks between nodes are called edges or links
// why sould you want a tree data structure?
// hierarchical in nature, and connected - like family relationships - writing a compiler - filesystems
// access data more quickly - better than arrays - binary search tree
// binary meaning each node can have up to 2 kids
//

#include <stdio.h>
#include <stdlib.h>


typedef struct s_treenode {
    int value;
    struct s_treenode *left;
    struct s_treenode *right;

}   t_treenode;

t_treenode  *create_node(int value) {
    t_treenode *result;
    result = malloc(sizeof(t_treenode));
    if (result != NULL) {
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

void    print_tree(t_treenode *root) {
    if (root == NULL) {
        printf("\nempty tree\n");
        return ;
    }
    // different orders we can go through a tree
    // preorder traversal - print data in the node first, 
    // then left subtree, then right subtree
    // you benefit doing things recursively with trees
    printf("Value: %d\n", root->value);
    printf("Left\n");
    print_tree(root->left);

    printf("Right\n");
    print_tree(root->right);
    printf("\nFinito\n");
}

int main() {

    t_treenode *node1 = create_node(10); // root node
    t_treenode *node2 = create_node(11);
    t_treenode *node3 = create_node(12);
    t_treenode *node4 = create_node(13);
    t_treenode *node5 = create_node(14);

    node1->left = node2;
    node1->right = node3;
    node3->left = node4;
    node3->right = node5;

    print_tree(node1);

    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return 0;
}