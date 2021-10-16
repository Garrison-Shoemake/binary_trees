#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts child node on right side
 * @parent: parent node
 * @value: value to store in new node
 * Return: returns pointer to created node or NULL if failed/null parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new;
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
		new->parent = parent;
	}

	return (new);
}
