#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: binary tree node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = node->right = NULL;
	if (parent->right)
	{
		temp = parent->right;
		parent->right = node;
		temp->parent = node;
		node->right = temp;
	}
	else
	{
		parent->right = node;
	}
	return (node);
}
