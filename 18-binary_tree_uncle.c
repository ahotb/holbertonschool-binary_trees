#include "binary_trees.h"

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
