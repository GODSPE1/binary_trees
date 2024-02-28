#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function that inserts a node.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node
 *
 * Return: If parent already has a right-child.s
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);

}
