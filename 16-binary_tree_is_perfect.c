#include "binary_trees.h"
int _recursion(int x, int y);
/**
 * is_leaf - A function that checks if a binary tree is perfect
 * @node: A pointer to the node to check.
 *
 * Return: If tree is NULL, function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height = 0;
    size_t nodes = 0;
    size_t power = 0;
    
    if (tree == NULL)
	    return (0);

    if (tree->right == NULL && tree->left == NULL)
        return (1);

    height = binary_tree_height(tree);
    nodes = binary_tree_size(tree);

    power = (size_t)_recursion(2, height + 1);
    return (int)(power - 1 == nodes);
}

/**
 * _recursion - calculates x raised to the power of y.
 * @x: value to be raised.
 * @y: the power to raise to.
 * Return: x raised to the power of y, or -1 if y is negative.
*/
int _recursion(int x, int y)
{
    if (y < 0)
        return (-1);
        else
        return (x * _recursion(x, y - 1));
}

#include "binary_trees.h"
/**
 * binary_tree_size - A function that measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
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

	ld = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rd = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((ld > rd) ? ld : rd);
}
