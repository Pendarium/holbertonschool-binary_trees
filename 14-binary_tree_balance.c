#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree. If tree is NULL, returns 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

		/* Si l'arbre est NULL, sa hauteur est 0 */
		if (tree == NULL)
			return (0);



	/* On calcule récursivement la hauteur du sous-arbre gauche */
	left_height = binary_tree_height(tree->left);

	/* On calcule récursivement la hauteur du sous-arbre droit */
	right_height = binary_tree_height(tree->right);

	/* On retourne la plus grande hauteur + 1 (pour le noeud courant) */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: Balance factor, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	/* Si l'arbre est NULL, le facteur d'équilibre est 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* On calcule la hauteur du sous-arbre gauche */
	left_height = binary_tree_height(tree->left);

	/* On calcule la hauteur du sous-arbre droit */
	right_height = binary_tree_height(tree->right);

	/* On retourne la différence entre la hauteur gauche et droite */
	return (left_height - right_height);
}
