#include "binary_trees.h"

/**
 * binary_tree_insert_left - It inserts a node as the left-child.
 * @parent: It's a pointer to the node to insert left-child in.
 * @value: It's the value to store in the new code.
 *
 * Return: It returns a pointer to the created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;

	if (parent->left)
		new_node->left = parent->left, parent->left->parent = new_node;
	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
