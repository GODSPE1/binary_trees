#include "binary_trees.h"
/**
 * binary_tree_balance - A function that measures
 * the balance factor of a binary tree
 * @tree: A  pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((binary_tree_height(tree->left)) - (binary_tree_height(tree->right)));
}


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

	ld = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	rd = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((ld > rd) ? ld : rd);
}

