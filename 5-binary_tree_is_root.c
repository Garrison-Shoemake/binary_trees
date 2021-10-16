#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to check
 * Return: returns 1 on success, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	binary_tree_is_root(node->parent);
	return (0);
}
