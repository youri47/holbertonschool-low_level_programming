#include "hash_tables.h"

/**
 * main - Teste la fonction key_index
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	char *cles[] = {
		"cisfun",
		"Don't forget to tweet today",
		"98",
		"hello",
		"world",
		"Holberton",
		"School",
		""
	};
	unsigned long int taille_table = 1024;
	unsigned long int i;
	unsigned long int index;

	printf("=== Tests de la fonction key_index ===\n");
	printf("Taille de la table: %lu\n\n", taille_table);

	/* Test de toutes les clés */
	for (i = 0; i < 8; i++)
	{
		printf("Clé: \"%s\"\n", cles[i]);
		index = key_index((const unsigned char *)cles[i], taille_table);
		printf("  → Index: %lu\n", index);
		printf("  → Hash complet: %lu\n",
			hash_djb2((const unsigned char *)cles[i]));
		printf("\n");
	}

	/* Test avec différentes tailles de table */
	printf("=== Test avec différentes tailles ===\n");
	printf("Clé: \"Holberton\"\n\n");

	unsigned long int tailles[] = {10, 100, 1024, 10000};
	
	for (i = 0; i < 4; i++)
	{
		index = key_index((const unsigned char *)"Holberton", tailles[i]);
		printf("  Taille %5lu → Index: %lu\n", tailles[i], index);
	}

	/* Test de distribution */
	printf("\n=== Test de distribution (10 clés, table de taille 10) ===\n");
	char *test_cles[] = {
		"a", "b", "c", "d", "e",
		"f", "g", "h", "i", "j"
	};

	for (i = 0; i < 10; i++)
	{
		index = key_index((const unsigned char *)test_cles[i], 10);
		printf("  \"%s\" → index %lu\n", test_cles[i], index);
	}

	/* Vérification qu'une même clé donne toujours le même index */
	printf("\n=== Test de cohérence ===\n");
	printf("La clé \"test\" avec table de taille 1024:\n");
	for (i = 0; i < 5; i++)
	{
		index = key_index((const unsigned char *)"test", 1024);
		printf("  Appel %lu: index = %lu\n", i + 1, index);
	}
	printf("✓ Tous les index doivent être identiques!\n");

	printf("\n🎉 Tous les tests terminés!\n");
	return (0);
}
