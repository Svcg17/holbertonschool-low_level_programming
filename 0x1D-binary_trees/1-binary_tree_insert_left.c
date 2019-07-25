#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node.
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = binary_tree_node(parent, value);
	binary_tree_t *t = NULL;

	if (parent == NULL || newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		t = parent->left;
		parent->left = newnode;
		newnode->left = t;
		t->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
