#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Ajoute un nouveau noeud au debut de la liste
 * @head: Double pointeur vers le premier noeud
 * @str: Chaine a stocker dans le nouveau noeud
 *
 * Description: Cette fonction cree un nouveau noeud, copie la chaine
 * avec strdup, et insere le noeud au debut de la liste
 *
 * Return: Adresse du nouveau noeud, ou NULL si echec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Verifier que str n'est pas NULL */
	if (str == NULL)
		return (NULL);

	/* Etape 1 : Allouer la memoire pour le nouveau noeud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Etape 2 : Dupliquer la chaine avec strdup */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Etape 3 : Stocker la longueur */
	new_node->len = strlen(str);

	/* Etape 4 : Lier le nouveau noeud a la liste */
	new_node->next = *head;

	/* Etape 5 : Mettre a jour head */
	*head = new_node;

	return (new_node);
}
