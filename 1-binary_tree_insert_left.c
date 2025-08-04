#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_left;

	/* Vérifie si le parent est NULL */
	if (parent == NULL)
		return (NULL);

	/* Alloue de la mémoire pour le nouveau noeud */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Si le parent a déjà un enfant gauche, on*/
	/*le déplace sous le nouveau noeud */
	if (parent->left != NULL)
	{
		old_left = parent->left;
		new_node->left = old_left;
		old_left->parent = new_node;
	}
	else
	{
		/* Sinon, le nouveau noeud n'a pas d'enfant gauche */
		new_node->left = NULL;
	}

	/* ATTENTION : Correction ici, il faut assigner*/
	/*le nouveau noeud à parent->left */
	parent->left = new_node;

	/* Le nouveau noeud n'a pas d'enfant droit */
	new_node->right = NULL;

	/* On définit le parent du nouveau noeud */
	new_node->parent = parent;

	/* On stocke la valeur dans le nouveau noeud */
	new_node->n = value;

	return (new_node);
}
