#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_sibling - function that finds the sibling of a node
 *@node: pointer to the node of the tree to check
 *Return: return a pointer to the sibling node or NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
