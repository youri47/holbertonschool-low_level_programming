#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */



list_t *add_node(list_t **head, const char *str)
{
     list_t *new;
 unsigned int len = 0;

 while (str[len]){
     len++;
     }

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);                                /* struc de base y a str et unnsigned len , donc le */ 
 new->len = len;                                       /*  1)str de new (new->str) dois etre = a qqchose ici  */
 new->next = (*head);                                  /*  direct str ducoup stringduplicate . */
 (*head) = new;                                  /* 2)y a len aussi du coup lelen de new doit = len et 3) le  node doit pointer a son next qui etait le  */ 
 return (*head);                                       /*  1er node avant . */
}
