#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if NULL, else depth value
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	while (temp->parent)
	{
		depth += 1;
		temp = temp->parent;
	}

	return (depth);
}
