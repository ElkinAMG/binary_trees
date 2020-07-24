#include "binary_trees.h"

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
		if (NO_CHILDREN)
			return (1);

		is_full = binary_tree_is_full(tree->left);

		if (is_full)
	        {
			is_full = binary_tree_is_full(tree->right);

			if (tree->parent)
				if (BOTH_CHILDREN || NO_CHILDREN)
					return (1);
		}

	}

	return (is_full);
}
