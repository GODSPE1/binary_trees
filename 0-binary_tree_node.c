#include "binary_trees.h"
/**
 * binary_tree_node - A function that creates a binary tree node.
 * @parent: A pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Return Null if an error occurs else a pointer to the newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = newNode->right = NULL;

	return (newNode);
}
