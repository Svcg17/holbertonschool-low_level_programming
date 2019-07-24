#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child in
 * a binary tree.
 * @tree: pointer to the root node of the tree to count num of nodes.
 * Return: number of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left !=  NULL || tree->right != NULL)
		return (1);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right);
}
