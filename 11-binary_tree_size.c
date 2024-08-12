#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of the tree
 * @tree: tree being measured
 * Return: size or 0 if NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_len = 0;
	size_t right_len = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_len = binary_tree_size(tree->left);
	right_len = binary_tree_size(tree->right);
	return (left_len + right_len + 1);
}
