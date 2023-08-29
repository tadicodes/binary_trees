#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: Error - NULL.
 *         Otherwise - a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_nod(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
