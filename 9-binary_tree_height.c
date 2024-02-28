#include "binary_trees.h"
/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A  pointer to the root node of the tree to measure the height.
 *
 * Return: the height otherwise 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ld, rd;

	if (tree != NULL)
	{
		ld = binary_tree_height(tree->left);
		rd = binary_tree_height(tree->right);

		if (ld > rd)
			return (ld + 1);
		else
			return (rd + 1);
	}
	return (0);
}
