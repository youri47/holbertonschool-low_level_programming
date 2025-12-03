#include "lists.h"
#include <stdio.h>

/**
 * print_list - Affiche tous les elements d'une liste chainee
 * @h: Pointeur vers le premier noeud de la liste
 *
 * Description: Cette fonction parcourt une liste chainee du debut
 * jusqu'a la fin (NULL) et affiche chaque element au format [len] str
 *
 * Return: Le nombre de noeuds dans la liste
 */
size_t print_list(const list_t *h)
{
	/* Compteur pour compter le nombre de noeuds parcourus */
	size_t count = 0;

	/*
	 * Boucle while : on continue tant que h n'est pas NULL
	 * NULL signifie qu'on a atteint la fin de la liste
	 */
	while (h != NULL)
	{
		/*
		 * Verification : si la chaine str est NULL
		 * on affiche [0] (nil) pour eviter un crash
		 */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			/*
			 * Cas normal : on affiche la longueur (len)
			 * suivie de la chaine (str)
			 */
			printf("[%u] %s\n", h->len, h->str);

		/* On incremente le compteur de noeuds */
		count++;

		/*
		 * On passe au noeud suivant
		 * h->next contient l'adresse du prochain noeud
		 */
		h = h->next;
	}

	/* On retourne le nombre total de noeuds parcourus */
	return (count);
}
