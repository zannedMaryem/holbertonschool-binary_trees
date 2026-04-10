#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - function that checks if a node is a root
 *@node: node to check.
 *Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	binary_tree_is_root(node->parent);
	return (1);
}
