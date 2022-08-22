#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a given node is a root
 * @node: Pointer to the node to check
 * Return: 1 if it is a root or 0 if Null and if false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
