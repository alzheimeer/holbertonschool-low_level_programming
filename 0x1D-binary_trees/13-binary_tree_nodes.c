#include "binary_trees.h"

/**
 *binary_tree_nodes - counts nodes with at least one child in a binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 *Return: tree is NULL, the function must return 0
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int a, b;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);
	return (1 + a + b);
}
