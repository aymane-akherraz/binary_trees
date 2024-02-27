#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;

	if (parent->right)
	{
		tmp = parent->right;
		parent->right = new;
		tmp->parent = new;
		new->right = tmp;
	}
	else
	{
		parent->right = new;
		new->right = NULL;
	}
	return (new);
}
