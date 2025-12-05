#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau noeud au début d'une liste list_t
 * @head: Pointeur vers le pointeur de tête de liste
 * @str: Chaîne de caractères à dupliquer et stocker dans le noeud
 *
 * Return: Adresse du nouveau noeud, ou NULL si échec
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

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = l

