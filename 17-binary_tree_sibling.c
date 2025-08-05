#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling for
 *
 * Return: Pointer to the sibling node, or NULL if no sibling exists
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Si le nœud est NULL, il n’a pas de frère ou sœur */
	if (node == NULL)
		return (NULL);

	/* Si le nœud n’a pas de parent, il ne peut pas avoir de frère ou sœur */
	if (node->parent == NULL)
		return (NULL);

	/* Si le nœud est l’enfant gauche, son frère est l’enfant droit */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Si le nœud est l’enfant droit, son frère est l’enfant gauche */
	if (node->parent->right == node)
		return (node->parent->left);

	/* Cas par défaut (ne devrait pas arriver normalement) */
	return (NULL);
}
