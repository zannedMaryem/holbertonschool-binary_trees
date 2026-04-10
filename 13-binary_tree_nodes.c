#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - function that counts the nodes of a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *Return: number of nodes in the tree, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL || binary_tree_is_leaf(tree))
    {
        return(0);
    }
    return(binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *@node: node to check.
 *Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);
	return (1);
}
