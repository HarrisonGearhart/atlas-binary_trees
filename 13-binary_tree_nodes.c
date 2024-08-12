#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the number of nodes with at least 1 child
 * @tree: tree being counted
 * Return: number of nodes or 0 if null
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		nodes += (1);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
