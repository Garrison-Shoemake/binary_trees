#include "binary_trees.h"
/**
 * binary_tree_depth - find the depth of a tree
 * @tree: tree to find depth of
 * Return: returns depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || (tree->parent == NULL))
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
