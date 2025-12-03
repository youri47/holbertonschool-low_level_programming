#include "lists.h"

/**
 * list_len - Compte le nombre d'elements dans une liste chainee
 * @h: Pointeur vers le premier noeud de la liste
 *
 * Description: Cette fonction parcourt toute la liste chainee
 * et compte chaque noeud jusqu'a atteindre NULL (fin de liste)
 *
 * Return: Le nombre de noeuds dans la liste
 */
size_t list_len(const list_t *h)
{
	/*
	 * Initialisation du compteur a 0
	 * size_t est un type non-signe parfait pour compter
	 */
	size_t count = 0;

	/*
	 * Boucle de parcours :
	 * - On commence a la tete (h)
	 * - On continue tant que h n'est pas NULL
	 * - NULL = fin de la liste
	 */
	while (h != NULL)
	{
		/*
		 * A chaque passage dans la boucle :
		 * 1. On incremente le compteur (un noeud de plus)
		 * 2. On passe au noeud suivant avec h = h->next
		 */
		count++;
		h = h->next;
	}

	/*
	 * Quand on sort de la boucle, h vaut NULL
	 * count contient le nombre total de noeuds parcourus
	 */
	return (count);
}
