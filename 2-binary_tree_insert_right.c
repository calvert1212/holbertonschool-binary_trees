#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a
 * node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child
 * @value: is the value to store in the new node
 *
 * Return: pointer or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right != NULL)
		(parent->right)->parent = newNode;
	{
		newNode->right = parent->right;
		parent->right = newNode;
	}

	return (newNode);
}
