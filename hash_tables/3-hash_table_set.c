#include "hash_tables.h"

/**
 * hash_table_set - Ajoute ou met à jour un élément dans la table de hachage
 * @ht: La table de hachage
 * @key: La clé (ne peut pas être vide)
 * @value: La valeur associée à la clé (peut être vide)
 *
 * Description: Cette fonction ajoute une nouvelle paire clé/valeur à la table.
 * Si la clé existe déjà, elle met à jour la valeur.
 * En cas de collision, le nouveau noeud est ajouté au début de la liste.
 *
 * Return: 1 en cas de succès, 0 sinon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nouveau_noeud, *temp;
	char *valeur_copie;

	/* Vérifier les paramètres */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Calculer l'index où stocker la clé */
	index = key_index((const unsigned char *)key, ht->size);

	/* Vérifier si la clé existe déjà (pour mise à jour) */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* La clé existe, mettre à jour la valeur */
			valeur_copie = strdup(value);
			if (valeur_copie == NULL)
				return (0);
			free(temp->value);
			temp->value = valeur_copie;
			return (1);
		}
		temp = temp->next;
	}

	/* La clé n'existe pas, créer un nouveau noeud */
	nouveau_noeud = malloc(sizeof(hash_node_t));
	if (nouveau_noeud == NULL)
		return (0);

	/* Dupliquer la clé et la valeur */
	nouveau_noeud->key = strdup(key);
	if (nouveau_noeud->key == NULL)
	{
		free(nouveau_noeud);
		return (0);
	}

	nouveau_noeud->value = strdup(value);
	if (nouveau_noeud->value == NULL)
	{
		free(nouveau_noeud->key);
		free(nouveau_noeud);
		return (0);
	}

	/* Ajouter au début de la liste (gestion des collisions) */
	nouveau_noeud->next = ht->array[index];
	ht->array[index] = nouveau_noeud;

	return (1);
}
