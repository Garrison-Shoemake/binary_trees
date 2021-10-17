#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through tree in pre order traversal
 * @tree: root node of tree
 * @func: function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
