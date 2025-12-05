#include "hash_tables.h"

/**
 * main - Teste la fonction hash_table_create
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	hash_table_t *ht;

	/* Test 1: Création d'une table de taille normale */
	printf("Test 1: Création d'une table de taille 1024\n");
	ht = hash_table_create(1024);
	if (ht == NULL)
	{
		printf("❌ Échec de la création\n");
		return (1);
	}
	printf("✓ Table créée avec succès!\n");
	printf("  - Taille: %lu\n", ht->size);
	printf("  - Adresse: %p\n", (void *)ht);
	printf("  - Adresse du tableau: %p\n\n", (void *)ht->array);
	free(ht->array);
	free(ht);

	/* Test 2: Création d'une petite table */
	printf("Test 2: Création d'une table de taille 10\n");
	ht = hash_table_create(10);
	if (ht == NULL)
	{
		printf("❌ Échec de la création\n");
		return (1);
	}
	printf("✓ Table créée avec succès!\n");
	printf("  - Taille: %lu\n\n", ht->size);
	free(ht->array);
	free(ht);

	/* Test 3: Création d'une table de taille 0 (devrait échouer) */
	printf("Test 3: Création d'une table de taille 0 (doit échouer)\n");
	ht = hash_table_create(0);
	if (ht == NULL)
		printf("✓ Retour NULL comme attendu\n\n");
	else
	{
		printf("❌ Devrait retourner NULL!\n");
		free(ht->array);
		free(ht);
	}

	/* Test 4: Grande table */
	printf("Test 4: Création d'une grande table (taille 65536)\n");
	ht = hash_table_create(65536);
	if (ht == NULL)
	{
		printf("❌ Échec de la création\n");
		return (1);
	}
	printf("✓ Grande table créée avec succès!\n");
	printf("  - Taille: %lu\n", ht->size);
	free(ht->array);
	free(ht);

	printf("\n🎉 Tous les tests sont passés!\n");
	return (0);
}
