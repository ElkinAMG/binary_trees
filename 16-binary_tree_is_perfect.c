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
	return (tree ? _binary_tree_height(tree) - 1 : 0);
}

int nodes(const binary_tree_t *tree)
{
	int left_child = 1, right_child = 0;

	if (tree)
	{
		if (BOTH_CHILDREN)
		{
			left_child = nodes(tree->left);
			right_child = nodes(tree->right);

			return (left_child == right_child);
		}
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
	int left, right;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

		if (left == right)
		{
			return(nodes(tree));
		}
	}

	return (0);
}
