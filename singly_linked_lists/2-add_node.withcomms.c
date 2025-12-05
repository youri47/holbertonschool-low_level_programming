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

	/*
	 * Etape 0 : Verifier que str n'est pas NULL
	 * On ne peut pas dupliquer une chaine NULL
	 */
	if (str == NULL)
		return (NULL);

	/*
	 * Etape 1 : Allouer la memoire pour le nouveau noeud
	 * sizeof(list_t) = taille de la structure (str + len + next)
	 */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*
	 * Etape 2 : Dupliquer la chaine avec strdup
	 * strdup fait malloc + strcpy en une seule fonction
	 * IMPORTANT : strdup peut echouer, on doit verifier
	 */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		/*
		 * Si strdup echoue, on doit liberer le noeud
		 * qu'on vient de creer pour eviter une fuite memoire
		 */
		free(new_node);
		return (NULL);
	}

	/*
	 * Etape 3 : Calculer et stocker la longueur de la chaine
	 * strlen compte les caracteres sans le '\0' final
	 */
	new_node->len = strlen(str);

	/*
	 * Etape 4 : Lier le nouveau noeud a la liste existante
	 * new_node->next pointe vers l'ancien premier noeud
	 *
	 * AVANT : *head → [ancien premier] → ...
	 * APRES : new_node → [ancien premier] → ...
	 */
	new_node->next = *head;

	/*
	 * Etape 5 : Mettre a jour head pour pointer vers le nouveau noeud
	 * C'est ici qu'on utilise le double pointeur **head
	 * On modifie la valeur de head dans la fonction appelante
	 *
	 * RESULTAT : *head → [new_node] → [ancien premier] → ...
	 */
	*head = new_node;

	/*
	 * Etape 6 : Retourner l'adresse du nouveau noeud
	 */
	return (new_node);
}
