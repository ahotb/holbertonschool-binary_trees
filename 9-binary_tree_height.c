#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	int left, right;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}
