#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - function that counts the leaves of a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *Return: number of leaves in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
