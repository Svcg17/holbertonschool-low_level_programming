#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node.
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node.
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);
	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = newnode;
		newnode->right = parent->right;
	}
	parent->right = newnode;

	return (newnode);
}
