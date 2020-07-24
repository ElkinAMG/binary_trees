#include "binary_trees.h"

/**
 * binary_tree_height - It measures the height of a binary tree.
 * @tree: It's a pointer to the root node of the tree.
 *
 * Return: It returns the height of the tree, on failure 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight;
	int rheight;

	if (tree)
	{
		lheight = binary_tree_height(tree->left);
		rheight = binary_tree_height(tree->right);

		return (lheight > rheight ? lheight + 1 : rheight + 1);
	}

	return (0);
}

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


/**
 * binary_tree_is_perfect - It's checks whether or not a btree is perfect.
 * @tree: It's the pointer to the root node.
 *
 * Return: It returns 1 if the is a perfect btree, on failure 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh, rh, sl, sr;

	if (tree)
	{
		lh = binary_tree_height(tree->left);
		rh = binary_tree_height(tree->right);

		sl = binary_tree_size(tree->left);
		sr = binary_tree_size(tree->right);

		return ((lh == rh) && (sl == sr));
	}

	return (0);
}
