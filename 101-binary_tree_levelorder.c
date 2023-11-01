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
 * print_curr_level - print on the current level of binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * @lvl: current level in binary tree
 * @f: pointer to a function
 *
 * Return: nothing
*/
void print_curr_level(const binary_tree_t *tree, int lvl, void (*f)(int))
{
	if (tree == NULL)
		return;

	if (lvl == 0)
		f(tree->n);
	else
	{
		print_curr_level(tree->left, lvl - 1, f);
		print_curr_level(tree->right, lvl - 1, f);
	}
}
/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in the
 * node must be passed as a parameter to this function.
 *
 * Return: nothing
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (tree == NULL || func == NULL)
		return;

	height = get_tree_height(tree);

	for (i = 0; i < height; i++)
	{
		print_curr_level(tree, i, func);
	}
}
