#include "binary_trees.h"
/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to the root node
 * Return: 0 or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lefts, rights;

	if (tree == NULL)
		return (0);

	lefts = binary_tree_size(tree->left);
	rights = binary_tree_size(tree->right);

	return (lefts + rights + 1);
}
