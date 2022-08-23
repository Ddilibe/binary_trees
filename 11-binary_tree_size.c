#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: It will return integers
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a, b;
	if (!tree)
		return (0);

	if (tree->right || tree->left)
	{
		a = binary_tree_size(tree->right);
		b = binary_tree_size(tree->left);
		return (a + b + 1);
	}
	return (1);
}
