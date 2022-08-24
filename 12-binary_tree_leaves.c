#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: It will return a number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t a = 0;

	if (!tree)
		return (0);

	if (tree->right)
		a = a + 1;
	else
		a = 1;
	if (tree->left)
		a = a + 1;
	else
		a = 1;
	return (a);
}
