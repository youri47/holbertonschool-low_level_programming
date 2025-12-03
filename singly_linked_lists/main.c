#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Point d'entree du programme de test
 *
 * Return: Toujours 0 (succes)
 */
int main(void)
{
	list_t *head;
	list_t *node1, *node2, *node3, *node4;
	size_t n;

	/* Creation des noeuds manuellement pour le test */
	node1 = malloc(sizeof(list_t));
	node2 = malloc(sizeof(list_t));
	node3 = malloc(sizeof(list_t));
	node4 = malloc(sizeof(list_t));

	/* Verification des allocations */
	if (!node1 || !node2 || !node3 || !node4)
		return (1);

	/* Remplissage du noeud 1 */
	node1->str = strdup("Hello");
	node1->len = 5;
	node1->next = node2;

	/* Remplissage du noeud 2 */
	node2->str = strdup("World");
	node2->len = 5;
	node2->next = node3;

	/* Remplissage du noeud 3 - avec str NULL pour tester ce cas */
	node3->str = NULL;
	node3->len = 0;
	node3->next = node4;

	/* Remplissage du noeud 4 */
	node4->str = strdup("Holberton");
	node4->len = 9;
	node4->next = NULL;

	/* La tete pointe vers le premier noeud */
	head = node1;

	/* Appel de la fonction a tester */
	printf("=== Test de print_list ===\n");
	n = print_list(head);
	printf("-> Nombre de noeuds: %lu\n", n);

	/* Test avec liste vide (NULL) */
	printf("\n=== Test avec liste vide ===\n");
	n = print_list(NULL);
	printf("-> Nombre de noeuds: %lu\n", n);

	/* Liberation de la memoire */
	free(node1->str);
	free(node2->str);
	free(node4->str);
	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return (0);
}
