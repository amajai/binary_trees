#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if NULL, else height value
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t left_h = 0;
	size_t right_h = 0;


	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (height);

	left_h += binary_tree_height(tree->left);
	right_h += binary_tree_height(tree->right);

	if (left_h > right_h)
		height = left_h;
	else
		height = right_h;

	height += 1;
	return (height);
}
