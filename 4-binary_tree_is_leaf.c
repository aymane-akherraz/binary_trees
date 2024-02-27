#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0 or if node is NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !(node->left) && !(node->right))
		return (1);

	return (0);
}
