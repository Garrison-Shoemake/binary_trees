#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts child node on left side
 * @parent: parent node
 * @value: value to store in new node
 * Return: returns pointer to created node or NULL if failed/null parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		new->parent = parent;
	}

	return (new);
}
