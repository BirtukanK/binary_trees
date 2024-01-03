#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right of the parent
 * @parent: pointer to the node to insert the right child
 * @value: new node value
 * Return: return a pointer to the created node, or NULL on failure or if\
  parent is NULL
 * Description: If parent already has a right-child, the new node must take\
  its place, and the old right-child must be set as the right-child\
  of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newChild, *oldChild;

	if (parent == NULL)
		return (NULL);
	/* create a child and point it to it parent */
	newChild = binary_tree_node(parent, value);
	if (newChild == NULL)
		return (NULL);

	/* if the parent has a child on the right side */
	if (parent->right != NULL)
	{
		oldChild = parent->right;
		newChild->right = oldChild;
		oldChild->parent = newChild;
	}
	parent->right = newChild;
	return (newChild);
}
