#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: Null if uncle not found
 * else, pointer to uncle Node
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp_s;
	const binary_tree_t *temp_f;

	if (first == NULL || second == NULL)
		return (NULL);

	if (second->parent == first)
		return (second->parent);
	temp_f = first;
	temp_s = second;

	while (temp_f->parent)
	{
		while (temp_s->parent)
		{
			if (temp_s->parent == temp_f->parent)
				return (temp_s->parent);
			temp_s = temp_s->parent;
		}
		temp_f = temp_f->parent;
	}
	return (NULL);
}
