#include "lists.h"

/**
 * dlistint_len - retourne le nombre d'éléments dans une liste dlistint_t
 * @h: pointeur vers la tête de la liste
 *
 * Return: le nombre d'éléments dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t compteur = 0;

    /* Parcourir toute la liste */
    while (h != NULL)
    {
        /* Passer au noeud suivant */
        h = h->next;
        
        /* Incrémenter le compteur */
        compteur++;
    }

    return (compteur);
}
