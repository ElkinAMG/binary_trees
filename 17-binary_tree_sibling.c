#include "binary_trees.h"

/**
 * binary_tree_sibling - It finds the sibling node.
 * @node: It's a pointer to the root node.
 *
 * Return: It returns a pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node && node->parent)
	{
		if (node->parent->left == node)
			sibling = node->parent->right;
		else
			sibling = node->parent->left;
	}

	return (sibling);
}
