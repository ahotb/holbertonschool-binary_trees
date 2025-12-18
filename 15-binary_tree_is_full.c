#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if full, 0 if not or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);

/* Leaf node */
if (!tree->left && !tree->right)
return (1);

/* Node with both children */
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) &&
        binary_tree_is_full(tree->right));

/* Node with only one child */
return (0);
}
