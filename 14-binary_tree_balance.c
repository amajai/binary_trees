#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * get_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if NULL, else height value
*/
size_t get_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = get_tree_height(tree->left);
	right_h = get_tree_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if NULL, else size value
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	left_h = get_tree_height(tree->left);
	right_h = get_tree_height(tree->right);

	return (left_h - right_h);
}
