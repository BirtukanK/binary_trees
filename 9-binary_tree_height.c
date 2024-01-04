#include "binary_trees.h"

/**
 * binary_tree_height - function measures height of binary tree
 * @tree: pointer to the root node
 * Return: size_t height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth, righth;

	lefth = 0;
	righth = 0;
	if (tree == NULL)
		return (0);
	lefth = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	righth = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (lefth > righth)
	{
		return (lefth);
	}
	else
	{
		return (righth);

	}
}
