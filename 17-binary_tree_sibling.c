#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: Return Null or pointer to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *a, *b;

	if (!node)
		return (NULL);
	a = node;
	b = node;
	if (a->parent)
	{
		a = a->parent;
		if (a->right && a->left)
		{
			if (a->right->n == b->n)
				return (a->left);
			return (a->right);
		}
		return (NULL);
	}
	return (NULL);
}
