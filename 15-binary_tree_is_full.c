#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if NULL, else size value
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL || (tree->left == NULL && tree->right))
		return (0);
	if (tree->left && tree->right == NULL)
		return (0);

	left_h = binary_tree_is_full(tree->left);
	right_h = binary_tree_is_full(tree->right);

	if (left_h == right_h)
		return (1);
	else
		return (0);
}
