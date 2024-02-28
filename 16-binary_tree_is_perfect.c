#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or if the binary tree is not perfect otherwise 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int rh, lh, l = 0, r = 0;

	if (!(tree))
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if ((lh == rh) && (tree->left && tree->right))
	{
		l = binary_tree_is_perfect(tree->left);
		r = binary_tree_is_perfect(tree->right);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);

	return (l && r);
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
