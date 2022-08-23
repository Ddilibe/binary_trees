#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Intergers
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	if (tree->right != NULL)
	{
		a = binary_tree_height(tree->right);
		return (a + 1);
	}
	if (tree->left != NULL)
	{
		b = binary_tree_height(tree->left);
		return (b + 1);
	}
	return (0);
}
