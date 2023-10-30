#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a
 * binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if NULL, else size value
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_count = 0;

	if (tree == NULL)
		return (nodes_count);

	nodes_count += binary_tree_nodes(tree->left);
	nodes_count += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (nodes_count + 1);

	return (nodes_count);
}
