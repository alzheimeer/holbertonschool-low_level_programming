#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *Return: tree is NULL, the function must return 0
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	a = binary_tree_leaves(tree->left);
	b = binary_tree_leaves(tree->right);
	return (a + b);
}
