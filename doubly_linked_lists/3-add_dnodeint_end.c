#include "lists.h"

/**
 * add_dnodeint_end - ajoute un nouveau noeud à la fin d'une liste dlistint_t
 * @head: pointeur vers le pointeur de la tête de la liste
 * @n: valeur à stocker dans le nouveau noeud
 *
 * Return: l'adresse du nouvel élément, ou NULL si échec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *nouveau;
    dlistint_t *dernier;

    /* Allouer de la mémoire pour le nouveau noeud */
    nouveau = malloc(sizeof(dlistint_t));
    if (nouveau == NULL)
        return (NULL);

    /* Initialiser le nouveau noeud */
    nouveau->n = n;
    nouveau->next = NULL;

    /* Si la liste est vide, le nouveau noeud devient la tête */
    if (*head == NULL)
    {
        nouveau->prev = NULL;
        *head = nouveau;
        return (nouveau);
    }

    /* Parcourir la liste jusqu'au dernier noeud */
    dernier = *head;
    while (dernier->next != NULL)
    {
        dernier = dernier->next;
    }

    /* Lier le nouveau noeud à la fin */
    dernier->next = nouveau;
    nouveau->prev = dernier;

    return (nouveau);
}
