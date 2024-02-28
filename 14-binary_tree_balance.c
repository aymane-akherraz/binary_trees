#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL otherwise the balance factor of the binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	unsigned int lh = 0, rh = 0;

	if (!(tree))
		return (0);

	if (tree->left)
		lh = (1 + binary_tree_balance(tree->left));

	if (tree->right)
		rh = (1 + binary_tree_balance(tree->right));

	return (lh - rh);
}
