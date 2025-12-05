#include "hash_tables.h"

/**
 * hash_table_delete - Supprime une table de hachage
 * @ht: La table de hachage à supprimer
 *
 * Description: Cette fonction libère toute la mémoire allouée pour
 * la table de hachage, y compris:
 * - Toutes les clés et valeurs de chaque noeud
 * - Tous les noeuds de toutes les listes chaînées
 * - Le tableau de pointeurs
 * - La structure de la table elle-même
 * Si ht est NULL, ne fait rien.
 *
 * Return: Rien (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *noeud_courant;
	hash_node_t *noeud_suivant;

	/* Si la table est NULL, ne rien faire */
	if (ht == NULL)
		return;

	/* Parcourir tout le tableau */
	for (i = 0; i < ht->size; i++)
	{
		/* Parcourir la liste chaînée à cet index */
		noeud_courant = ht->array[i];
		while (noeud_courant != NULL)
		{
			/* Sauvegarder le pointeur vers le prochain noeud */
			noeud_suivant = noeud_courant->next;

			/* Libérer la clé et la valeur */
			free(noeud_courant->key);
			free(noeud_courant->value);

			/* Libérer le noeud */
			free(noeud_courant);

			/* Passer au noeud suivant */
			noeud_courant = noeud_suivant;
		}
	}

	/* Libérer le tableau */
	free(ht->array);

	/* Libérer la structure de la table */
	free(ht);
}
