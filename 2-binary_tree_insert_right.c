#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node to the right
 * @parent: pointer to first node
 * @value: value of node
 * @Return: right node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL || value == '\0')
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = NULL;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
