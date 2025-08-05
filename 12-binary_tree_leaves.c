#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves in the tree, or 0 if tree is NULL
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t children_right;
	size_t children_left;
	size_t leaf;

	/* Si l'arbre est NULL, il n'a pas de feuilles */
	if (tree == NULL)
		return (0);

	/* Si le noeud n'a pas d'enfant gauche ni droit, c'est une feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* On compte récursivement les feuilles du sous-arbre droit */
	children_right = binary_tree_leaves(tree->right);

	/* On compte récursivement les feuilles du sous-arbre gauche */
	children_left = binary_tree_leaves(tree->left);

	/* Le nombre total de feuilles est la somme*/
	/*des feuilles des deux sous-arbres */
	leaf = children_left + children_right;

	return (leaf);
}
