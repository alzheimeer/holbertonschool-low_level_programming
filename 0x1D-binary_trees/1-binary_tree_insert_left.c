#include "binary_trees.h"

/**
 *binary_tree_insert_left - insertd node as the left child
 *@parent: pointer to the node to insert left-child
 *@value: value to store in the new node
 *Return: pointer to the created node or NULL if fails or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child, *original_left_child;

	if (parent == NULL)
		return (NULL);

	left_child = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->n = value;
	left_child->parent = parent;
	left_child->left = NULL;
	left_child->right = NULL;
	if (parent->left != NULL)
	{
		original_left_child = parent->left;
		left_child->left = original_left_child;
		original_left_child->parent = left_child;
	}
	parent->left = left_child;
	return (left_child);

}
