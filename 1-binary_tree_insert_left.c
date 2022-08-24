#include "binary_trees.h"

/**
 * binary_tree_insert_left: Function that inserts a node as the left child
 * @parent: Pointer to the node to insert the left child
 * @value: Value to store in the new node
 * Return: Pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *add, *dump;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;
	dump = parent->left;
	if (dump)
	{
		add = malloc(sizeof(binary_tree_t));
		add->left = parent->left->left;
		add->right = parent->left->right;
		add->n = parent->left->n;
		add->parent = new_node;
		new_node->left = add;
	} else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;
	return (parent);
}
