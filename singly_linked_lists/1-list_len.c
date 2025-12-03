#include "lists.h"

/**
 * list_len - Compte le nombre d'elements dans une liste chainee
 * @h: Pointeur vers le premier noeud de la liste
 *
 * Return: Le nombre de noeuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
