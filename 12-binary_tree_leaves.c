#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in tree
 * @tree: the tree being counted
 * Return: number of leaves of 0 if null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
