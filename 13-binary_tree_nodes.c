#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 * Return: 1 if yes, 0 if no
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	binary_tree_is_leaf(node->left);
	binary_tree_is_leaf(node->right);
	return (0);
}

/**
 * binary_tree_nodes - coutns the number of half nodes
 * @tree: root of the binary tree
 * Return: returns size of the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);
	
	if (binary_tree_is_leaf(tree) == 1)
		return (0);

	l_height = binary_tree_nodes(tree->left);
	r_height = binary_tree_nodes(tree->right);

	return (l_height + r_height + 1);
}
