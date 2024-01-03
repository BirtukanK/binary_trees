#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node or child to the left
 * @parent: parent node
 * @value: value to insert
 * Return: a pointer to the binary_tree created.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newChild;
	binary_tree_t *oldChild;

	if (parent == NULL)
		return (NULL);
	newChild = binary_tree_node(parent, value);
	if (newChild == NULL)
		return (NULL);
	if (parent->left == NULL)
		parent->left = newChild;
	else
	{
		oldChild = parent->left;
		parent->left = newChild;
		newChild->left = oldChild;
		oldChild->parent = newChild;
	}
	return (newChild);
}

