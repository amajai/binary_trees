#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - pointer to the root node of the tree to measure the size
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 if NULL, else size value
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (size);
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
