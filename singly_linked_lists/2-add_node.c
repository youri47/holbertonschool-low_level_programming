#include "lists.h"

/**
 * add_node - ajoute un nouveau noeud au début d'une liste list_t
 * @head: adresse du pointeur vers le premier élément de la liste
 * @str: chaîne à dupliquer pour le nouveau noeud
 *
 * Return: adresse du nouveau noeud, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* duplique la string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* calcule la longueur */
	while (str[len] != '\0')
		len++;

	new_node->len = len;
	new_node->next = *head; /* l'ancien head devient le next */
	*head = new_node;       /* le nouveau devient le head */

	return (new_node);
}
