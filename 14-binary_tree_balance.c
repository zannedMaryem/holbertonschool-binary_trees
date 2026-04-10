#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance
 *Return: balance factor (left_height - right_height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
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
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	height = 1 + (left_height > right_height ? left_height : right_height);
	return (height);
}

