#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a node
 * @tree: pointer to the node
 * Return: 0 or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if ((tree != NULL) && (tree->parent != NULL))
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
		return (0);
}
