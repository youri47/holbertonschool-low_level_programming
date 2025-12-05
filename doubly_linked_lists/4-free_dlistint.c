#include "lists.h"

/**
 * free_dlistint - libère une liste dlistint_t
 * @head: pointeur vers la tête de la liste
 *
 * Return: rien
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    /* Parcourir et libérer chaque noeud */
    while (head != NULL)
    {
        /* Sauvegarder le noeud suivant */
        temp = head->next;
        
        /* Libérer le noeud actuel */
        free(head);
        
        /* Passer au noeud suivant */
        head = temp;
    }
}
