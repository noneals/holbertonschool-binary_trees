#include "binary_trees.h"

/**
 * height_for_balance - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: 0 If tree is NULL.
 */

static size_t height_for_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = height_for_balance(tree->left) + 1;

	if (tree->right)
		right_height = height_for_balance(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}
