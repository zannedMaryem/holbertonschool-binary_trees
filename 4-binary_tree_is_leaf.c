#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - function that inserts a node
 * as the left-child of another node.
 *@node: node to check.
 *Return: pointer to the created node,
 *or NULL on failure or if parent is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL || node->left != NULL || node->right != NULL)
    {
        return(0);
    }
    binary_tree_is_leaf(node->left);
    binary_tree_is_leaf(node->right);
    return(1);
}