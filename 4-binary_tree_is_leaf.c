#include "binary_trees.h"
#include <stdlib.h>
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
