#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 * Return: the depth of node or 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current;
	size_t depth;

	current = tree;
	depth = 0;
	while (current->parent)
	{
		current = current->parent;
		depth++;
	}
	return (depth);
	/* return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0); */
}
