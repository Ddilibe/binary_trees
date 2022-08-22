#include "binary_trees.h"

/**
 * binary_tree_node - Function for creating a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: Pointer to the new node or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *current_node, *past_node;

	new_node = malloc(sizeof(binary_tree_t));
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	if (parent == NULL)
	{
		new_node->parent = NULL;
		parent = new_node;
		return (parent);
	}
	else
	{
		current_node = parent;

		while(1)
		{
			past_node = current_node;
			if (current_node->n > value)
			{
				current_node = current_node->left;
			}
			else
			{
				current_node = current_node->right;
			}
			if (current_node == NULL)
			{
				new_node->parent = past_node;
				new_node->n = value;
				current_node = new_node;
				return (current_node);
			}
		}
	}
}
