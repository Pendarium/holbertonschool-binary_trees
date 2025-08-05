#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_right;
	int full_left;
	int full;

	/* Si l'arbre est NULL, il n'est pas complet */
	if (tree == NULL)
		return (0);

	/* Si le noeud n'a pas d'enfant gauche ni droit,*/
	/*c'est une feuille donc complet */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Si le noeud a deux enfants, on vérifie récursivement*/
	/*si les deux sous-arbres sont complets */
	if (tree->left != NULL && tree->right != NULL)
	{
		full_left = binary_tree_is_full(tree->left);
		full_right = binary_tree_is_full(tree->right);
		full = full_left && full_right;
		return (full);
	}
	else
		/* Si le noeud n'a qu'un seul enfant, l'arbre n'est pas complet */
		return (0);
}
