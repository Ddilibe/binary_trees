#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the towest common ancestor
 * of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the common ancestor or NULL if no common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first)
		return (NULL);
	if (!second)
		return (NULL);
	
	if (second->n == first->parent->n)
		return ((binary_tree_t *)second);
	if (first->n == second->parent->n)
		return ((binary_tree_t *)first);
	if (second->parent && first->parent)
		return ((binary_tree_t *)binary_trees_ancestor(first->parent, second->parent));
	return (NULL);
}
