#include "binary_trees.h"

/**
 * binary_tree_leaves - find number of leave of a binary tree
 * @tree: pointer to the root tree
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_left, leave_right;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	leave_left = binary_tree_leaves(tree->left);
	leave_right = binary_tree_leaves(tree->right);
	return (leave_left + leave_right);
}
