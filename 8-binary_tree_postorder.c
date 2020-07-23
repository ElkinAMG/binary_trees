#include "binary_trees.h"

/**
 * binary_tree_postorder - It traverses a binary tree `PostOrder`.
 * @tree: It's the tree to be traversed.
 * @func: It's the func to be ran on each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
