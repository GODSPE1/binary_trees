#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - A function that measures
 * the balance factor of a binary tree
 * @tree: A  pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rd, ld;

	if (tree == NULL)
		return (0);

	ld = tree->left ? (int)binary_tree_height(tree->left) : 1;
	rd = tree->right ? (int)binary_tree_height(tree->right) : 1;

	return (ld - rd);
}


/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree, or 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ld = 0, rd = 0;

	if (tree == NULL)
		return (0);

	ld = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rd = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((ld > rd) ? ld : rd);
}
