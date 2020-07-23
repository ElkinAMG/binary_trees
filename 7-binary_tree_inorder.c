#include "binary_trees.h"

/**
 * binary_tree_inorder - It traverses a binary tree `InOrder`.
 * @tree: It's the tree to be traversed.
 * @func: It's the func to be ran on each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
