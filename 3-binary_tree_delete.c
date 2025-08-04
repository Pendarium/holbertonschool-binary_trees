#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * This function frees all nodes of a binary tree using post-order traversal.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Si l'arbre est vide, on ne fait rien */
	if (tree == NULL)
		return;

	/* On supprime récursivement le sous-arbre gauche */
	binary_tree_delete(tree->left);

	/* On supprime récursivement le sous-arbre droit */
	binary_tree_delete(tree->right);

	/* On libère le noeud courant */
	free(tree);
}
