#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the towest common ancestor
 * of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the common ancestor or NULL if no common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t a, b;

	if (!first)
		return (NULL);
	if (!second)
		return (NULL);
	printf(" %d %d \n", first->n, second->parent->n);
	if (first->parent == second->parent)
		return (first->parent);
	if (first->n == second->parent->n)
		return ((binary_tree_t *) first);
	if (second->n == first->parent->n)
		return ((binary_tree_t *) second);
	a = binary_tree_depth(first);
	b = binary_tree_depth(second);
	if (a > b)
	{
		while (a > b && first->parent)
		{
			first = first->parent;
			a = a - 1;
		}
	} else
	{
		while (b > a && second->parent)
		{
			second = second->parent;
			b = b - 1;
		}
	}
	return ((binary_tree_t *)binary_trees_ancestor(first, second));
}

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
