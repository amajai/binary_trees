#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * check_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * @depth: The max depth in left side of tree
 * @curr_level: current level of node
 *
 * Return: 1 if perfect, else 0
*/
int check_tree_is_perfect(const binary_tree_t *tree, int depth, int curr_level)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == curr_level ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	left = check_tree_is_perfect(tree->left, depth, curr_level + 1);
	right = check_tree_is_perfect(tree->right, depth, curr_level + 1);
	return (left && right);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if NULL, else size value
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	int depth_left = 0;

	if (tree == NULL)
		return (0);

	while (temp->left)
	{
		depth_left += 1;
		temp = temp->left;
	}

	return (check_tree_is_perfect(tree, depth_left, 0));
}
