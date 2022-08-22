#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that goes through a binary tree
 * using pre order traversal
 * @tree: Pointer to the root node of the tree to tranverse
 * @func: Pointer to a function to call each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return ;
	if (!func)
		return ;
	func(tree->n);
	if (tree->left)
		binary_tree_preorder(tree->left, func);
	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
