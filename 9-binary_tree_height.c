#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
        return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	height = 1 + (left_height > right_height ? left_height : right_height);
	return (height);
}
