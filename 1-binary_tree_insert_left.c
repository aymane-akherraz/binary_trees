#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new;
		tmp->parent = new;
		new->left = tmp;
	}
	else
	{
		parent->left = new;
		new->left = NULL;
	}
	return (new);
}
