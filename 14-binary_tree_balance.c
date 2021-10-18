#include "binary_trees.h"
/**
 * binary_tree_height - determines the height of the binary tree
 * @tree: root of the tree to measure
 * Return: returns length of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);

}

/**
 * binary_tree_balance - finds if a binary tree is balanced
 * @tree: tree to check for balance
 * Return: returns 1 if true and 0 if not
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
