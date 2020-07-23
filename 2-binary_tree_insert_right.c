#include "binary_trees.h"

/**
 * binary_tree_insert_right - It inserts a node as the right-child.
 * @parent: It's a pointer to the node to insert right-child in.
 * @value: It's the value to store in the new code.
 *
 * Return: It returns a pointer to the created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
		return (NULL);

	n_node->n = value;

	if (parent->right)
		n_node->right = parent->right, parent->right->parent = n_node;
	else
		n_node->right = NULL;

	n_node->left = NULL;

	parent->right = n_node;
	n_node->parent = parent;

	return (n_node);
}
