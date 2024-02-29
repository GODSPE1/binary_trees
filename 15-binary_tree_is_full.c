#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * 
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (binary_tree_for_full(tree));
}

/**
 * binary_tree_for_full - A helper function to check if a binary tree is full
 * @tree: A pointer to the root node of the tree
 *
 * Return: If full return 1 otherwise 0.
 */
int binary_tree_for_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (1);
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left && tree->right)
        return (binary_tree_for_full(tree->left) && binary_tree_for_full(tree->right));

    return (0);
}
