#include "lists.h"
#include <stdio.h>

/**
 * print_list - Affiche tous les éléments d'une liste chaînée
 * @h: Pointeur vers le premier nœud de la liste
 *
 * Return: Le nombre de nœuds dans la liste
 */
size_t print_list(const list_t *h)
{
    size_t count = 0; /* Compteur de nœuds */

    /* Parcourir la liste tant qu'on n'est pas à la fin (NULL) */
    while (h != NULL)
    {
        /* Si la chaîne est NULL, afficher [0] (nil) */
        if (h->str == NULL
			{
            printf("[0] (nil)\n");
        }
        else
        {
            /* Sinon, afficher la longueur et la chaîne */
            printf("[%u] %s\n", h->len, h->str);
        }

        count++;      /* Incrémenter le compteur */
        h = h->next;  /* Passer au nœud suivant */
    }

    return (count); /* Retourner le nombre total de nœuds */
}
