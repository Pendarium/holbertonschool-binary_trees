#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a
 * binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Si l'arbre ou la fonction est NULL, on ne fait rien */
	if (tree == NULL || func == NULL)
		return;

	/* On parcourt récursivement le sous-arbre gauche */
	binary_tree_postorder(tree->left, func);

	/* On parcourt récursivement le sous-arbre droit */
	binary_tree_postorder(tree->right, func);

	/* On applique la fonction au noeud courant (postordre) */
	func(tree->n);
}
