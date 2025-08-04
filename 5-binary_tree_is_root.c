#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root node.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a root, 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* Si le noeud est NULL, ce n'est pas une racine */
	if (node == NULL)
		return (0);

	/* Si le noeud n'a pas de parent, c'est une racine */
	if (node->parent == NULL)
		return (1);

	/* Sinon, ce n'est pas une racine */
	return (0);
}
