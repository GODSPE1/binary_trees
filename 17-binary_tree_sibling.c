#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_sibling - A function that finds the sibling of a nodes
 * @node: A pointer to the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL, return NULLIf node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* determine if node is left or right child */
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else if (node == node->parent->right)
	{
		return (node->parent->left);
	}
	else
		return (NULL);
}
