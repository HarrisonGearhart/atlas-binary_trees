#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the number of nodes with at least 1 child
 * @tree: tree being counted
 * Return: number of nodes or 0 if null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 1);
	return (0);
}
