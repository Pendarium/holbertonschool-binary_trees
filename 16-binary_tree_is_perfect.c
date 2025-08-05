#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
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
 * check_perfect - Recursively checks if a binary tree is perfect.
 * @tree: Pointer to the current node.
 * @level: Current level in the tree.
 * @expected_depth: Expected depth for leaf nodes.
 *
 * Return: 1 if subtree is perfect, 0 otherwise.
 */
int check_perfect(const binary_tree_t *tree, int level, int expected_depth)
{
	int left_perf;
	int right_perf;

	/* Si le noeud est NULL, on considère ce*/
	/*sous-arbre comme parfait (cas neutre) */
	if (tree == NULL)
		return (1); /* Neutre dans un appel récursif */

	/* Si le noeud est une feuille, on vérifie qu'il est au bon niveau */
	if (tree->left == NULL && tree->right == NULL)
		return (level == expected_depth);

	/* Si le noeud a deux enfants,*/
	/*on vérifie récursivement les deux sous-arbres */
	if (tree->left && tree->right)
	{
		left_perf = check_perfect(tree->left, level + 1, expected_depth);
		right_perf = check_perfect(tree->right, level + 1, expected_depth);

		return (left_perf && right_perf);
	}

	/* Si le noeud n'a qu'un seul enfant, l'arbre n'est pas parfait */
	return (0); /* Un seul enfant => pas parfait */
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	/* Si l'arbre est NULL, il ne peut pas être parfait */
	if (tree == NULL)
		return (0);

	/* On calcule la hauteur de l'arbre */
	height = binary_tree_height(tree);

	/* On vérifie récursivement si l'arbre est parfait */
	return (check_perfect(tree, 0, height - 1));
}
