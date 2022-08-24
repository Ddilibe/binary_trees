#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Intergers
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0, b = 0;

	if (!tree)
		return (0);

	if (tree->right && tree->left)
	{
		a = binary_tree_height(tree->right);
		b = binary_tree_height(tree->left);
		if (b > a)
			a = b;
		return (a + 1);
	} else if (tree->left)
	{
		a = binary_tree_height(tree->left);
		return (a + 1);
	} else if (tree->right)
	{
		a = binary_tree_height(tree->right);
		return (a + 1);
		a = a;
	} else
	{
		a = 0;
	}
	return (a);
}
