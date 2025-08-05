#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle for
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	/* Si le nœud est NULL, il n’a pas d’oncle */
	if (node == NULL)
		return (NULL);

	/* Si le nœud n’a pas de parent, il ne peut pas avoir d’oncle */
	if (node->parent == NULL)
		return (NULL);

	/* Si le parent n’a pas de parent, il n’y */
	/* a pas de grand-parent → pas d’oncle */
	if (node->parent->parent == NULL)
		return (NULL);

	/* On récupère le grand-parent */
	grand_parent = node->parent->parent;

	/* Si le parent est l’enfant droit, l’oncle est l’enfant gauche */
	if (node->parent == grand_parent->right)
		return (grand_parent->left);

	/* Si le parent est l’enfant gauche, l’oncle est l’enfant droit */
	if (node->parent == grand_parent->left)
		return (grand_parent->right);

	/* Cas de sécurité, normalement jamais atteint */
	return (NULL);
}
