#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node.
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;
	binary_tree_t *t = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (parent == NULL || newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	if (parent->left != NULL)
	{
		t = parent->left;
		parent->left = newnode;
		newnode->left = t;
		t-> parent = newnode;
	}
	else
		parent->left = newnode;

	return (newnode);
}
