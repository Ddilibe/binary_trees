#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: It will return an integer
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a = 0;

	if (!tree)
		return (0);
	if (tree->right)
		a = 1;
	if (tree->left)
		a = 1;
	a = a + (binary_tree_nodes(tree->right));
	a = a + (binary_tree_nodes(tree->left));

	return (a);
}
