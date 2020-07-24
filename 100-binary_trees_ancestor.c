#include "binary_trees.h"

#define FIRST const binary_tree_t *first
#define SECOND const binary_tree_t *second

/**
 * binary_trees_ancestor - It finds the lowest common ancestor of two nodes.
 * @FIRST: It's a pointer to the first node.
 * @SECOND: It's a pointer to the second node.
 *
 * Return: If not common ancestor found return NULL, otherwise a pointer to it.
 */

binary_tree_t *binary_trees_ancestor(FIRST, SECOND)
{
	binary_tree_t *p_first, *p_second;

	if (first && second)
	{
		p_first = first->parent;
		p_second = second->parent;

		if (p_first && p_second)
		{

			if (p_first == p_second)
				return (p_first);
			else if (p_second == first)
				return (p_second);
			else if (p_first == p_second->parent)
				return (p_second->parent);

			return (binary_trees_ancestor(p_first, p_second));
		}

	}

	return (NULL);
}
