#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - function that measures the depth of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 1;
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_root(tree) == 1)
	{
		return (0);
	}
	depth += binary_tree_depth(tree->parent);
	return (depth);
}
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
