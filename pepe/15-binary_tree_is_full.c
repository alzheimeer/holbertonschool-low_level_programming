#include "binary_trees.h"

/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: pointer to head of tree
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	a = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);
	return (a && b);
}
