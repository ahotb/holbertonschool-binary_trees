#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (!tree)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

return (1 + (left > right ? left : right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 if not or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return (0);

/* Leaf node */
if (!tree->left && !tree->right)
return (1);

/* Node with both children */
if (tree->left && tree->right)
{
if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
}

/* Node with one child only */
return (0);
}

