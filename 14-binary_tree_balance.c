#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 *@tree: pointer to the root node of the tree to mesure the balance
 *Return: balance of tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		balance++;
	}
	if (tree->right != NULL)
	{
		balance++;
	}
	return (balance);
}
