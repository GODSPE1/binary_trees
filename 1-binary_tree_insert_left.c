#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node
 *
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node.
 *
 * Return: NULL if error occurs else, a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}

	parent->left = newnode;

	return (newnode);

}
