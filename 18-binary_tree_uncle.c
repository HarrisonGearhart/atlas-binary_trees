#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of node
 * @node: node being tracked
 * Return: unlce of NULL if null
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *_parent;
	binary_tree_t *grand_parent;

	if (node == NULL)
		return (NULL);

	_parent = node->parent;
	if (_parent == NULL)
		return (NULL);

	grand_parent = _parent->parent;
	if (grand_parent == NULL)
		return (NULL);

	if (grand_parent->left == _parent)
		return (grand_parent->right);
	if (grand_parent->right == _parent)
		return (grand_parent->left);
	
	return (NULL);
}
