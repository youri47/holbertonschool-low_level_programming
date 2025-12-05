#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - ajoute un nouveau nœud à la fin d'une liste chaînée
 * @head: double pointeur vers la liste de type list_t
 * @str: chaîne à stocker dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL; /* Dernier nœud → next = NULL */

	/* Cas où la liste est vide */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Parcours pour trouver le dernier nœud */
	while (current->next)
		current = current->next;

	current->next = new;

	return (new);
}

