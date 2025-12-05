#include "hash_tables.h"

/**
 * main - Teste la fonction hash_table_set
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	hash_table_t *ht;

	printf("=== Tests de hash_table_set ===\n\n");

	/* Créer une table de hachage */
	ht = hash_table_create(1024);
	if (ht == NULL)
	{
		printf("❌ Échec de création de la table\n");
		return (1);
	}
	printf("✓ Table créée (taille: %lu)\n\n", ht->size);

	/* Test 1: Ajouter un élément simple */
	printf("Test 1: Ajouter 'betty' = 'cool'\n");
	if (hash_table_set(ht, "betty", "cool"))
		printf("  ✓ Ajout réussi\n\n");
	else
		printf("  ❌ Échec\n\n");

	/* Test 2: Ajouter plusieurs éléments */
	printf("Test 2: Ajouter plusieurs éléments\n");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "heliotropes", "neuronophagy");
	hash_table_set(ht, "depravement", "serafins");
	hash_table_set(ht, "stylist", "subgenera");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "diurite", "rappel");
	hash_table_set(ht, "urites", "usucapt");
	printf("  ✓ 7 éléments ajoutés\n\n");

	/* Test 3: Mise à jour d'une valeur existante */
	printf("Test 3: Mettre à jour 'betty'\n");
	printf("  Avant: 'betty' = 'cool'\n");
	hash_table_set(ht, "betty", "awesome");
	printf("  Après: 'betty' = 'awesome'\n");
	printf("  ✓ Mise à jour réussie\n\n");

	/* Test 4: Valeur vide (autorisé) */
	printf("Test 4: Ajouter une valeur vide\n");
	if (hash_table_set(ht, "empty_value", ""))
		printf("  ✓ Valeur vide acceptée\n\n");
	else
		printf("  ❌ Échec\n\n");

	/* Test 5: Clé vide (non autorisé) */
	printf("Test 5: Essayer d'ajouter une clé vide (doit échouer)\n");
	if (!hash_table_set(ht, "", "value"))
		printf("  ✓ Clé vide refusée correctement\n\n");
	else
		printf("  ❌ La clé vide aurait dû être refusée!\n\n");

	/* Test 6: Paramètres NULL */
	printf("Test 6: Tests avec paramètres NULL\n");
	if (!hash_table_set(NULL, "key", "value"))
		printf("  ✓ Table NULL refusée\n");
	if (!hash_table_set(ht, NULL, "value"))
		printf("  ✓ Clé NULL refusée\n");
	if (!hash_table_set(ht, "key", NULL))
		printf("  ✓ Valeur NULL refusée\n\n");

	printf("🎉 Tous les tests terminés!\n");

	return (0);
}
