#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t children_right;
	size_t children_left;
	size_t nodes;

	/* Si l'arbre est NULL, il n'a pas de noeuds avec enfant */
	if (tree == NULL)
		return (0);

	/* On compte récursivement les noeuds avec enfant du sous-arbre droit */
	children_right = binary_tree_nodes(tree->right);

	/* On compte récursivement les noeuds avec enfant du sous-arbre gauche */
	children_left = binary_tree_nodes(tree->left);

	/* Le nombre total de noeuds avec enfant est la somme des deux sous-arbres */
	nodes = children_left + children_right;

	/* Si le noeud courant a au moins un enfant, on l'ajoute au total */
	if (tree->left != NULL || tree->right != NULL)
		nodes += 1;

	return (nodes);
}
