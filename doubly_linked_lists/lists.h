#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - liste doublement chaînée
 * @n: entier
 * @prev: pointe vers le noeud précédent
 * @next: pointe vers le noeud suivant
 *
 * Description: structure d'un noeud de liste doublement chaînée
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
