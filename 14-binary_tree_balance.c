#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

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

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (lh - rh);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL otherwise the height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int lh = 0, rh = 0;

	if (!(tree))
		return (0);

	if (tree->left)
		lh = (1 + binary_tree_height(tree->left));

	if (tree->right)
		rh = (1 + binary_tree_height(tree->right));

	return (rh > lh ? rh : lh);
}
