#include "binary_trees.h"

/**
 * binary_tree_height - Function to calculate the height of a tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: It will return an integer
 */

int binary_tree_heeight(const binary_tree_t *tree)
{
        int a = 0, b = 0;

        if (!tree)
                return (0);

        if (tree->right && tree->left)
        {
                a = a + binary_tree_heeight(tree->right);
		b = b + binary_tree_heeight(tree->left);
		if (b > a)
			a = b;
                return (a + 1);
        } else if (tree->left)
        {
                a = a + binary_tree_heeight(tree->left);
                return (a + 1);
        } else if (tree->right)
	{
		a = a + binary_tree_heeight(tree->right);
		return (a + 1);
	} else
	{
		return (a);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: It will return an integer
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (!tree)
		return (0);
	if (tree->right)
	{
		a = a + binary_tree_heeight(tree->right);
		a = a + 1;
	}
	if (tree->left)
	{
		b = b + binary_tree_heeight(tree->left);
		b = b + 1;
	}
	return (b - a);
}
