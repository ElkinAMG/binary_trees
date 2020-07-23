#include "binary_trees.h"

/**
 * _binary_tree_height - It measures the height of a binary tree.
 * @tree: It's a pointer to the root node of the tree.
 *
 * Return: It returns the height of the tree, on failure 0.
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	int lheight;
	int rheight;

	if (tree)
	{
		lheight = _binary_tree_height(tree->left);
		rheight = _binary_tree_height(tree->right);

		return (lheight > rheight ? lheight + 1 : rheight + 1);
	}

	return (0);
}


/**
 * binary_tree_height - It measures the height of a binary tree.
 * @tree: It's a pointer to the root node of the tree.
 *
 * Return: It returns the height of the tree, on failure 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (_binary_tree_height(tree) - 1);
}
