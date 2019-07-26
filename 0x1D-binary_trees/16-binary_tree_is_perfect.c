#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: the height of the binary tree, or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}


/**
 * binary_tree_is_perfect - function that checks if a binary tree
 * is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if its perfect, 0 if it isn't.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}
