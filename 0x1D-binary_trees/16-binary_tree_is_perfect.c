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

	if (tree == NULL)
		return (0);

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
/**
 * binary_tree_is_perfect - function that checks if a binary tree
 * is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if its perfect, 0 if it isn't.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l == height_r ? 1 : 0);

}
