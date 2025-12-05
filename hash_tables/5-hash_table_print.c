#include "hash_tables.h"

/**
 * hash_table_print - Affiche le contenu d'une table de hachage
 * @ht: La table de hachage à afficher
 *
 * Description: Cette fonction affiche toutes les paires clé/valeur
 * de la table de hachage dans l'ordre du tableau (index 0 à size-1),
 * puis dans l'ordre des listes chaînées (en cas de collision).
 * Format: {key: value, key: value, ...}
 * Si ht est NULL, n'affiche rien.
 *
 * Return: Rien (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *noeud_courant;
	int premier_element = 1;

	/* Si la table est NULL, ne rien afficher */
	if (ht == NULL)
		return;

	/* Ouvrir l'accolade */
	printf("{");

	/* Parcourir tout le tableau */
	for (i = 0; i < ht->size; i++)
	{
		/* Parcourir la liste chaînée à cet index */
		noeud_courant = ht->array[i];
		while (noeud_courant != NULL)
		{
			/* Ajouter une virgule avant chaque élément sauf le premier */
			if (premier_element == 0)
				printf(", ");

			/* Afficher la paire clé: valeur */
			printf("'%s': '%s'", noeud_courant->key, noeud_courant->value);

			/* Ce n'est plus le premier élément */
			premier_element = 0;

			/* Passer au noeud suivant dans la liste */
			noeud_courant = noeud_courant->next;
		}
	}

	/* Fermer l'accolade et nouvelle ligne */
	printf("}\n");
}
