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
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	if (second->parent == first)
		return (second->parent);
	temp = second;
	while (temp->parent != NULL)
	{
		if (temp->parent == first->parent)
			return (first->parent);
		temp = temp->parent;
	}

	temp = first;
	while (temp->parent != NULL)
	{
		if (temp->parent == second->parent)
			return (second->parent);
		temp = temp->parent;
	}
	return (NULL);
}
