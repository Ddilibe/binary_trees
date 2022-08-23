#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a node
 * in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: It must be an integer
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		a = binary_tree_depth(tree->parent);
		return (a + 1);
	}
	return (0);
}
