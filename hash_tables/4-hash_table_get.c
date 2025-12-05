#include "hash_tables.h"

/**
 * hash_table_get - Récupère la valeur associée à une clé
 * @ht: La table de hachage dans laquelle chercher
 * @key: La clé à rechercher
 *
 * Description: Cette fonction recherche une clé dans la table de hachage
 * et retourne la valeur associée. Elle parcourt la liste chaînée à l'index
 * calculé pour gérer les collisions.
 *
 * Return: La valeur associée à la clé, ou NULL si la clé n'existe pas
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *noeud_courant;

	/* Vérifier les paramètres */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculer l'index où chercher la clé */
	index = key_index((const unsigned char *)key, ht->size);

	/* Parcourir la liste chaînée à cet index */
	noeud_courant = ht->array[index];
	while (noeud_courant != NULL)
	{
		/* Comparer la clé recherchée avec la clé du noeud */
		if (strcmp(noeud_courant->key, key) == 0)
		{
			/* Clé trouvée! Retourner la valeur */
			return (noeud_courant->value);
		}
		/* Passer au noeud suivant */
		noeud_courant = noeud_courant->next;
	}

	/* Clé non trouvée */
	return (NULL);
}
