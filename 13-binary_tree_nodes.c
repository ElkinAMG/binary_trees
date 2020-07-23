#include "binary_trees.h"

/**
 * nodes - It counts the nodes with at least 1 child in a btree.
 * @tree: It's a pointer to the root node.
 *
 * Return: It returns the number of nodes, on failure 0.
 */

size_t nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (tree)
	{
		n_nodes += nodes(tree->left);
		n_nodes += nodes(tree->right);

		if (tree->left || tree->right)
			return (n_nodes + 1);
	}

	return (n_nodes);
}

/**
 * binary_tree_nodes - It counts the nodes with at least 1 child in a btree.
 * @tree: It's a pointer to the root node.
 *
 * Return: It returns the number of nodes, on failure 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (tree ? nodes(tree) : 0);
}
