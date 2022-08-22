#include "binary_trees.h"

/**
 * binary_tree_insert_right: Function that inserts a node as the right child
 * @parent: Pointer to the node to insert the right child
 * @value: Value to store in the new node
 * Return: Pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *add, *dump;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->left = NULL;
	new_node->n = value;
	new_node->parent = parent;
	dump = parent->right;
	if (dump)
	{
		if (dump->n > value)
		{		
			add = malloc(sizeof(binary_tree_t));
			add->left = parent->right->left;
			add->right = parent->right->right;
			add->n = parent->right->n;
			add->parent = new_node;
			new_node->right = add;
		} else
		{
			new_node->right = NULL;
			parent = parent->right;
		}

	} else
	{
		new_node->right = NULL;
	}
	parent->right = new_node;
	return (parent);
}
