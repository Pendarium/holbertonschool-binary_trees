#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si l'arbre ou la fonction est NULL, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/* On applique la fonction au noeud courant (préordre) */
	func(tree->n);

	/* On parcourt récursivement le sous-arbre gauche */
	binary_tree_preorder(tree->left, func);

	/* On parcourt récursivement le sous-arbre droit */
	binary_tree_preorder(tree->right, func);
}
