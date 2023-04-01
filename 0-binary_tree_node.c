#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to new node or NULL if it fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
		parent = new_node;
	else
	{
		if (value < parent->n)
			parent->left = new_node;
		else
			parent->right = new_node;
	}

	return (new_node);
}
