#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Programme de test pour add_node
 *
 * Return: Toujours 0 (succes)
 */
int main(void)
{
	list_t *head = NULL;

	printf("=== Ajout de noeuds au debut ===\n\n");

	printf("Ajout de 'Third'...\n");
	add_node(&head, "Third");
	print_list(head);
	printf("\n");

	printf("Ajout de 'Second'...\n");
	add_node(&head, "Second");
	print_list(head);
	printf("\n");

	printf("Ajout de 'First'...\n");
	add_node(&head, "First");
	print_list(head);
	printf("\n");

	printf("=== Liste finale ===\n");
	printf("Nombre de noeuds: %lu\n", list_len(head));

	return (0);
}
