#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: binary tree node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left)
	{
		temp = parent->left;
		parent->left = node;
		temp->parent = node;
		node->left = temp;
	}
	else
	{
		parent->left = node;
	}
	return (node);
}
