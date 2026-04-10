#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - function that inserts a node
 * as the left-child of another node.
 *@parent: new node parent.
 *@value: new node value.
 *Return: pointer to the created node,
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    else
    {
        free(tree->left);
        free(tree->right);
        free(tree->parent);
        free(tree);
    }
}