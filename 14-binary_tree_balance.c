#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, 0 if tree is NULL
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
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
return (0);

return ((int)binary_tree_height(tree->left) -
(int)binary_tree_height(tree->right));
}
