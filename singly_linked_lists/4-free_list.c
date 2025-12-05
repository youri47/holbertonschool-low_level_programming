#include "lists.h"

/**
 * free_list - libère une liste de type list_t
 * @head: pointeur vers le premier élément de la liste
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
