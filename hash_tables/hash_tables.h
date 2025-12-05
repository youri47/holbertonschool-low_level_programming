#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Noeud d'une table de hachage
 * @key: La clé (string, unique dans la table)
 * @value: La valeur correspondant à la clé
 * @next: Pointeur vers le prochain noeud (gestion des collisions)
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Structure d'une table de hachage
 * @size: Taille du tableau
 * @array: Tableau de pointeurs vers les noeuds
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Prototypes des fonctions */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif /* HASH_TABLES_H */
