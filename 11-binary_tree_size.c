#include "binary_trees.h"
/**
 * binary_tree_size - finds size of binary tree
 * @tree: tree to find size of
 * Return: returns size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
