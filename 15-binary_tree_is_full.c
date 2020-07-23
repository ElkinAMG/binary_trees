#include "binary_trees.h"

#define BOTH_CHILDREN (tree->left && tree->right)
#define NO_CHILDREN (!tree->left && !tree->right)

/**
 * binary_tree_is_full - It checks whether or not a btree is full.
 * @tree: It's a pointer to the root node of a tree.
 *
 * Return: It's returns if a btree is full, on failure 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree)
	{
		is_full = binary_tree_is_full(tree->left);
		is_full = binary_tree_is_full(tree->right);

		if (tree->parent)
		{
			if (BOTH_CHILDREN || NO_CHILDREN)
				is_full = 1;
			else
				is_full = 0;
		}
	}

	return (is_full);
}
