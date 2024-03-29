#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling node
 * @node: node to check
 * Return: A pointer to the sibling node, or NULL if no sibling lol
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
