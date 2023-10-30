#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: nothing
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t height = 0;
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (height);

	while (temp->left)
	{
		left_h += 1;
		temp = temp->left;
	}

	temp = tree;
	while (temp->right)
	{
		right_h += 1;
		temp = temp->right;
	}
	if (left_h > right_h)
		height = left_h;
	else
		height = right_h;

	return (height);
}
