#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Structure d'un noeud de liste chainee
 * @str: Chaine de caracteres
 * @len: Longueur de la chaine
 * @next: Pointeur vers le noeud suivant
 *
 * Description: Structure de noeud pour liste chainee simple
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototypes des fonctions */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
