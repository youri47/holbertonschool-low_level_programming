#include "lists.h"
#include <stdio.h>

/**
 * print_list - Affiche tous les elements d'une liste chainee
 * @h: Pointeur vers le premier noeud de la liste
 *
 * Description: Version utilisant une boucle for au lieu de while
 *
 * Return: Le nombre de noeuds dans la liste
 */
size_t print_list(const list_t *h)
{
	size_t count;

	/*
	 * Boucle for equivalente au while :
	 * - Initialisation : count = 0 (on commence a 0)
	 * - Condition : h != NULL (on continue tant qu'on n'est pas a la fin)
	 * - Increment : h = h->next, count++ (on avance et on compte)
	 */
	for (count = 0; h != NULL; h = h->next, count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}

	return (count);
}
