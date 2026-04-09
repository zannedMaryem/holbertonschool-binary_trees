#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - function that inserts a node
 * as the left-child of another node.
 *@parent: new node parent.
 *@value: new node value.
 *Return: pointer to the created node,
 *or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		node->left = NULL;
		node->right = NULL;
		node->n = value;
		node->parent = parent;
		parent->right = node;
	}
	else
	{
		node->right = parent->right;
		node->left = NULL;
		node->right->parent = node;
		node->parent = parent;
		node->n = value;
		parent->right = node;
	}
	return (node);
}
