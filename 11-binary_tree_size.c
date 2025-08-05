#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */



size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t taille;
	size_t left_size;
	size_t right_size;

	/* Si l'arbre est NULL, sa taille est 0 */
	if (tree == NULL)
		return (0);

	/* On calcule récursivement la taille du sous-arbre gauche */
	left_size = binary_tree_size(tree->left);

	/* On calcule récursivement la taille du sous-arbre droit */
	right_size = binary_tree_size(tree->right);

	/* La taille totale est 1 (le noeud courant)+ taille gauche+ taille droite */
	taille  = 1 + left_size + right_size;

	return (taille);
}
