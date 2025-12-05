#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée
 * @head: double pointeur vers la liste de type list_t
 * @str: chaîne de caractères à ajouter dans le nouveau nœud
 *
 * Return: l'adresse du nouveau nœud, ou NULL en cas d'échec
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    unsigned int len = 0;

    while (str[len])
        len++;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);   /* Duplique la chaîne et l'affecte à new->str */
    new->len = len;           /* Stocke la longueur de la chaîne */
    new->next = *head;        /* Pointe vers l'ancien premier nœud */
    *head = new;              /* Place le nouveau nœud en tête */

    return (*head);
}

