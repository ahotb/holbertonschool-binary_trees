#include "binary_trees.h"

/**
 *binary_tree_uncle - to get the uncle of the node
 *@node: to get his uncle
 *
 *Return: null if empty or no parent, uncle node  if its there
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node)
return (NULL);

if (!(node->parent)->parent)
return (NULL);

if (((node->parent)->parent)->right == node->parent)
{
return (((node->parent)->parent)->left);
}
else
{
return (((node->parent)->parent)->right);
}

return (NULL);
}
