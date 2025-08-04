#include "binary_trees.h"

/**
 * binary_tree_depth - Mesure la profondeur d'un noeud dans un arbre binaire
 * @tree: Pointeur vers le noeud dont on veut la profondeur
 *
 * Return: Profondeur du noeud, ou 0 si tree est NULL ou racine
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth;

	/* Si le noeud est NULL, la profondeur est 0 */
	if (tree == NULL)
		return (0);

	/* Si le noeud est la racine (pas de parent), la profondeur est 0 */
	if (tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		/* On calcule récursivement la profondeur du parent et on ajoute 1 */
		tree_depth = binary_tree_depth(tree->parent);
		return (tree_depth + 1);
	}
}
