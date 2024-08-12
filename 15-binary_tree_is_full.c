#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full
 * @tree: tree being checked
 * Return: 0 if Null, 1 if full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_child;
	int right_child;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left_child = binary_tree_is_full(tree->left);
		right_child = binary_tree_is_full(tree->right);
		return (left_child && right_child);
	}
	return (0);
}
