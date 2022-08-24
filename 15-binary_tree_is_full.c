#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: It must return an integer
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->right && tree->left)
	{
		a = binary_tree_is_full(tree->left);
		b = binary_tree_is_full(tree->right);
		if (a == 1 && b == 1)
			return (1);
	}
	return (0);
}
