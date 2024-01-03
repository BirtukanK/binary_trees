#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to put in the new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;
	newnode->n = value;

	return (newnode);
}
