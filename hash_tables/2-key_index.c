#include "hash_tables.h"

/**
 * key_index - Calcule l'index d'une clé dans la table de hachage
 * @key: La clé à hasher
 * @size: Taille du tableau de la table de hachage
 *
 * Description: Cette fonction utilise l'algorithme djb2 pour calculer
 * un hash de la clé, puis utilise l'opérateur modulo pour obtenir un
 * index valide dans le tableau (entre 0 et size-1).
 *
 * Return: L'index où la paire clé/valeur doit être stockée
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	/* Calculer le hash de la clé avec djb2 */
	hash = hash_djb2(key);

	/* Calculer l'index avec l'opérateur modulo */
	/* Cela garantit que l'index est entre 0 et size-1 */
	index = hash % size;

	return (index);
}
