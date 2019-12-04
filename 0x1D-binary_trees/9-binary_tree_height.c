#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to root node of the tree measure the height
 *Return: if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1 = 0, height2 = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	height1 = binary_tree_height(tree->left);
	height2 = binary_tree_height(tree->right);

	if (height1 < height2)
		return (height2 + 1);
	return (height1 + 1);
}
