#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node otherwise NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right != node)
		return (node->parent->right);

	return (node->parent->left);
}
