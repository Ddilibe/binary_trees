#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks that a binary tree is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if is a leaf or 0 is not and NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right)
		return (0);
	else if (node->left)
		return (0);
	else
		return (1);
}
