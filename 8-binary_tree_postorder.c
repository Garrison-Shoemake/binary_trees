#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through binary tree in post order
 * @tree: root node of tree to go through
 * @func: function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
