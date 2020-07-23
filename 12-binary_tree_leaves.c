#include "binary_trees.h"

/**
 * _binary_tree_leaves - It counts the leaves in a binary tree.
 * @tree: It's a pointer to the root node.
 *
 * Return: It returns the number of leaves in a tree, on failure 0.
 */

size_t _binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (leaves + 1);

		leaves += _binary_tree_leaves(tree->left);
		leaves += _binary_tree_leaves(tree->right);
	}

	return (leaves);
}

/**
 * binary_tree_leaves - It counts the leaves in a binary tree.
 * @tree: It's a pointer to the root node.
 *
 * Return: It returns the number of leaves in a tree, on failure 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (tree ? _binary_tree_leaves(tree) : 0);
}
