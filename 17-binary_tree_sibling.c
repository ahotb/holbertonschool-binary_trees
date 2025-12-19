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
