#include "hash_tables.h"

/**
 * create_new_node - Crée un nouveau noeud pour la table de hachage
 * @key: La clé
 * @value: La valeur
 *
 * Return: Pointeur vers le nouveau noeud, ou NULL si échec
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *nouveau_noeud;

	nouveau_noeud = malloc(sizeof(hash_node_t));
	if (nouveau_noeud == NULL)
		return (NULL);

	nouveau_noeud->key = strdup(key);
	if (nouveau_noeud->key == NULL)
	{
		free(nouveau_noeud);
		return (NULL);
	}

	nouveau_noeud->value = strdup(value);
	if (nouveau_noeud->value == NULL)
	{
		free(nouveau_noeud->key);
		free(nouveau_noeud);
		return (NULL);
	}

	nouveau_noeud->next = NULL;
	return (nouveau_noeud);
}

/**
 * update_value - Met à jour la valeur d'un noeud existant
 * @noeud: Le noeud à mettre à jour
 * @value: La nouvelle valeur
 *
 * Return: 1 en cas de succès, 0 sinon
 */
int update_value(hash_node_t *noeud, const char *value)
{
	char *nouvelle_valeur;

	nouvelle_valeur = strdup(value);
	if (nouvelle_valeur == NULL)
		return (0);

	free(noeud->value);
	noeud->value = nouvelle_valeur;
	return (1);
}

/**
 * hash_table_set - Ajoute ou met à jour un élément
 * @ht: La table de hachage
 * @key: La clé (ne peut pas être vide)
 * @value: La valeur associée à la clé (peut être vide)
 *
 * Return: 1 en cas de succès, 0 sinon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nouveau_noeud, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (update_value(temp, value));
		temp = temp->next;
	}

	nouveau_noeud = create_new_node(key, value);
	if (nouveau_noeud == NULL)
		return (0);

	nouveau_noeud->next = ht->array[index];
	ht->array[index] = nouveau_noeud;

	return (1);
}
