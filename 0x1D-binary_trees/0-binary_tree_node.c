#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: node parent
 *@value: node value
 *Return: pointer to new node
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newN = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!newN)
		return (NULL);

	newN->n = value;
	newN->parent = parent;
	newN->left = NULL;
	newN->right = NULL;
	return (newN);
}
