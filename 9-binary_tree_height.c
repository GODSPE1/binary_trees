#include "binary_trees.h"
/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ld, rd;

	if (tree == NULL)
		return (0);

	ld = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rd = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((ld > rd) ? ld : rd);
}
