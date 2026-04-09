#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: parent of the node to create.
 * @value: value to store at new node.
 * Return: pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
		node->n = value;
	}
	return (node);
}
