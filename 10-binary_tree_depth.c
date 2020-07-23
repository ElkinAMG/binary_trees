#include "binary_trees.h"

/**
 * _binary_tree_depth - It measures the depth of a node in a b-tree.
 * @tree: It's the tree to be measured.
 *
 * Return: It returns the depth of a node, on failure 0.
 */

size_t _binary_tree_depth(const binary_tree_t *tree)
{
	int dparent;

	if (tree)
	{
		dparent = _binary_tree_depth(tree->parent);

		return (dparent + 1);
	}

	return (0);
}

/**
 * binary_tree_depth - It measures the depth of a node in a b-tree.
 * @tree: It's the tree to be measured.
 *
 * Return: It returns the depth of a node, on failure 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree ? _binary_tree_depth(tree) - 1 : 0);
}
