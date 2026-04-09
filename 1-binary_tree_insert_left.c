#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left -
 *
 *
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;
		node->n = value;
		parent->left = node;
	}
	else if (parent->left != NULL)
	{
		node->left = parent->left;
		node->right = NULL;
		node->left->parent = node;
		node->parent = parent;
		node->n = value;
		parent->left = node;
	}
	return (node);
}
