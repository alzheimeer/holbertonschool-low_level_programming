#include "binary_trees.h"

/**
 * binary_tree_size - size of a binary tree
 * @tree: node binary tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);

	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);
	return (1 + a + b);
}
