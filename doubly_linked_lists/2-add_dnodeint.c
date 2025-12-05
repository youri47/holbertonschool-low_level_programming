#include "lists.h"

/**
 * add_dnodeint - ajoute un nouveau noeud au début d'une liste dlistint_t
 * @head: pointeur vers le pointeur de la tête de la liste
 * @n: valeur à stocker dans le nouveau noeud
 *
 * Return: l'adresse du nouvel élément, ou NULL si échec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *nouveau;

    /* Allouer de la mémoire pour le nouveau noeud */
    nouveau = malloc(sizeof(dlistint_t));
    if (nouveau == NULL)
        return (NULL);

    /* Initialiser le nouveau noeud */
    nouveau->n = n;
    nouveau->prev = NULL;
    nouveau->next = *head;

    /* Si la liste n'est pas vide, mettre à jour le prev de l'ancienne tête */
    if (*head != NULL)
        (*head)->prev = nouveau;

    /* Le nouveau noeud devient la nouvelle tête */
    *head = nouveau;

    return (nouveau);
}
