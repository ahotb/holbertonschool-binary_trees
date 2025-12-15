#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nwe;

	if (!parent)
		return (NULL);
	nwe = binary_tree_node(parent, value);
	if (!nwe)
		return (NULL);

	if (parent->right != NULL)
	{
		nwe->right = parent->right;
		parent->right->parent = nwe;
	}
	parent->right = nwe;
	return (nwe);
}
