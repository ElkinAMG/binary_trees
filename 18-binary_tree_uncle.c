#include "binary_trees.h"

/**
 * binary_tree_uncle - It finds the uncle of a node.
 * @node: It's a pointer to the node.
 *
 * Return: It returns a pointer to the uncle node, on failure NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL, *grandpa = NULL;

	if (node && node->parent)
	{
		grandpa = node->parent->parent;

		if (grandpa)
		{
			if (grandpa->left == node->parent)
				uncle = grandpa->right;
			else
				uncle = grandpa->left;
		}

	}

	return (uncle);
}
