#include "hash_tables.h"

/**
 * hash_table_create - Crée une nouvelle table de hachage
 * @size: Taille du tableau de la table de hachage
 *
 * Description: Cette fonction alloue la mémoire pour une nouvelle table
 * de hachage et initialise tous ses éléments à NULL.
 *
 * Return: Pointeur vers la nouvelle table de hachage, ou NULL en cas d'échec
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nouvelle_table;
	unsigned long int i;

	/* Vérifier que la taille est valide (non nulle) */
	if (size == 0)
		return (NULL);

	/* Allouer la mémoire pour la structure principale */
	nouvelle_table = malloc(sizeof(hash_table_t));
	if (nouvelle_table == NULL)
		return (NULL);

	/* Allouer la mémoire pour le tableau de pointeurs */
	nouvelle_table->array = malloc(sizeof(hash_node_t *) * size);
	if (nouvelle_table->array == NULL)
	{
		free(nouvelle_table);
		return (NULL);
	}

	/* Initialiser la taille de la table */
	nouvelle_table->size = size;

	/* Initialiser tous les pointeurs du tableau à NULL */
	for (i = 0; i < size; i++)
		nouvelle_table->array[i] = NULL;

	return (nouvelle_table);
}
