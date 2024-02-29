#include "binary_trees.h"
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * or NULL in no one found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t ft_dep, sc_dep;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	ft_dep = binary_tree_depth(first);
	sc_dep = binary_tree_depth(second);

	if (ft_dep == sc_dep)
		return (binary_trees_ancestor(first->parent, second->parent));
	else if (ft_dep < sc_dep)
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second));
}
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL otherwise the depth of the binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!(tree) || !(tree->parent))
		return (0);

	return ((1 + binary_tree_depth(tree->parent)));
}
