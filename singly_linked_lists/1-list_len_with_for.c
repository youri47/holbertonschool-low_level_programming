#include "lists.h"

/**
 * list_len - Compte le nombre d'elements dans une liste chainee
 * @h: Pointeur vers le premier noeud de la liste
 *
 * Description: Version utilisant une boucle for
 *
 * Return: Le nombre de noeuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count;

	/*
	 * Boucle for compacte :
	 * - count = 0 : initialisation
	 * - h != NULL : condition de continuation
	 * - h = h->next, count++ : avancer et compter
	 */
	for (count = 0; h != NULL; h = h->next)
		count++;

	return (count);
}
