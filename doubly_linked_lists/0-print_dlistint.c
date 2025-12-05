#include "lists.h"

/**
 * print_dlistint - affiche tous les éléments d'une liste dlistint_t
 * @h: pointeur vers la tête de la liste
 *
 * Return: le nombre de noeuds
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t compteur = 0;

    /* Parcourir toute la liste */
    while (h != NULL)
    {
        /* Afficher la valeur du noeud actuel */
        printf("%d\n", h->n);
        
        /* Passer au noeud suivant */
        h = h->next;
        
        /* Incrémenter le compteur */
        compteur++;
    }

    return (compteur);
}
