#include "binary_trees.h"


/**
 *binary_tree_sibling - to get the nighbor of the node
 *@node: to get his nighbor
 *
 *Return: null if empty or no parent, nighbor node  if its there
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{



if (!node)
return (NULL);

if (!node->parent)
return (NULL);

if ((node->parent)->left == node)
{
return ((node->parent)->right);
}
else
{
return ((node->parent)->left);
}

return (NULL);
}

/**
 *binary_tree_uncle - to get the uncle of the node
 *@node: to get his uncle
 *
 *Return: null if empty or no parent, uncle node  if its there
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent || !(node->parent)->parent)
return (NULL);

return (binary_tree_sibling(node->parent));
}
