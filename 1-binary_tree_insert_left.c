#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a
 * node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child
 * @value: is the value to store in the new node
 *
 * Return: pointer or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;

	if (parent->left != NULL)
		(parent->left)->parent = newNode;
	{
		newNode->left = parent->left;
		parent->left = newNode;
	}

	return (newNode);
}
