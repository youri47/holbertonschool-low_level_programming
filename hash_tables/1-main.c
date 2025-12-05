#include "hash_tables.h"

/**
 * main - Teste la fonction hash_djb2
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	unsigned long int hash;

	printf("=== Tests de la fonction hash_djb2 ===\n\n");

	/* Test 1: Chaîne simple */
	printf("Test 1: \"cisfun\"\n");
	hash = hash_djb2((unsigned char *)"cisfun");
	printf("  Hash: %lu\n\n", hash);

	/* Test 2: Autre chaîne */
	printf("Test 2: \"Don't forget to tweet today\"\n");
	hash = hash_djb2((unsigned char *)"Don't forget to tweet today");
	printf("  Hash: %lu\n\n", hash);

	/* Test 3: Chaîne vide */
	printf("Test 3: \"\" (chaîne vide)\n");
	hash = hash_djb2((unsigned char *)"");
	printf("  Hash: %lu\n", hash);
	printf("  Note: Devrait retourner 5381 (valeur initiale)\n\n");

	/* Test 4: Un seul caractère */
	printf("Test 4: \"a\"\n");
	hash = hash_djb2((unsigned char *)"a");
	printf("  Hash: %lu\n\n", hash);

	/* Test 5: Chiffres */
	printf("Test 5: \"12345\"\n");
	hash = hash_djb2((unsigned char *)"12345");
	printf("  Hash: %lu\n\n", hash);

	/* Test 6: Caractères spéciaux */
	printf("Test 6: \"Hello, World!\"\n");
	hash = hash_djb2((unsigned char *)"Hello, World!");
	printf("  Hash: %lu\n\n", hash);

	/* Test 7: Même chaîne deux fois (doit donner le même résultat) */
	printf("Test 7: Vérification de cohérence\n");
	printf("  \"test\" première fois: %lu\n",
		hash_djb2((unsigned char *)"test"));
	printf("  \"test\" deuxième fois: %lu\n",
		hash_djb2((unsigned char *)"test"));
	printf("  ✓ Les deux doivent être identiques!\n\n");

	/* Test 8: Chaînes similaires (différence subtile) */
	printf("Test 8: Chaînes similaires\n");
	printf("  \"hello\":  %lu\n", hash_djb2((unsigned char *)"hello"));
	printf("  \"Hello\":  %lu\n", hash_djb2((unsigned char *)"Hello"));
	printf("  Note: Les majuscules changent le hash!\n\n");

	printf("🎉 Tous les tests terminés!\n");
	return (0);
}
