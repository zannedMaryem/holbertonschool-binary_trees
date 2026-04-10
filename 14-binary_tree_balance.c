#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to measure the balance
 *Return: balance factor (left_height - right_height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (balance_height(tree->left) - balance_height(tree->right));
}
/**
 * balance_height - helper function to calculate height for balance factor
 * @tree: pointer to the node
 * Return: height where NULL = -1, leaf = 0
 */
static int balance_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);
	left = balance_height(tree->left);
	right = balance_height(tree->right);
	return (1 + (left > right ? left : right));
}
