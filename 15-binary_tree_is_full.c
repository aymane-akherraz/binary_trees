#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or if the binary tree is not full otherwise 1
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	unsigned int l = 0, r = 0;

	if (!(tree))
		return (0);

	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
	}
	else if (!(tree->left) && !(tree->right))
		return (1);
	else
		return (0);

	return (l && r);
}
