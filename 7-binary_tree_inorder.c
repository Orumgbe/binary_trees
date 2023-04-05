#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder traversal
 * @tree: pointer to the root node of the tree
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
