#include "binary_trees.h"

/**
 * binary_tree_is_leaf - It checks if a node is a leaf.
 * @node: It's the node to check.
 *
 * Return: It returns 1 if a node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && (!node->left && !node->right) ? 1 : 0);
}
