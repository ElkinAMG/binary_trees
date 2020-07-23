#include "binary_trees.h"

/**
 * binary_tree_size - It measures the size of a binary tree.
 * @tree: It's the root node to measure the size.
 *
 * Return: It returns the size, on failure 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree)
	{
		size = 0;

		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);

		return (size + 1);
	}

	return (0);
}
