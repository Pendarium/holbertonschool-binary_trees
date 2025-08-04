
#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Si le noeud est NULL, ce n'est pas une feuille */
	if (node == NULL)
		return (0);

	/* Si le noeud n'a pas d'enfant gauche ni droit, c'est une feuille */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* Sinon, ce n'est pas une feuille */
	return (0);
}
