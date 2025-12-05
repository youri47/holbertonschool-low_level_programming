#include "hash_tables.h"

/**
 * main - Teste la fonction hash_table_print
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	hash_table_t *ht;
	hash_table_t *petite_table;
	char *cles[] = {"betty", "julien", "bob", "alice", "charlie"};
	int i;

	printf("=== Tests de hash_table_print ===\n\n");

	/* Test 1: Table vide */
	printf("Test 1: Table vide\n");
	ht = hash_table_create(1024);
	printf("Contenu: ");
	hash_table_print(ht);
	printf("\n");

	/* Test 2: Un seul élément */
	printf("Test 2: Un seul élément\n");
	hash_table_set(ht, "betty", "cool");
	printf("Contenu: ");
	hash_table_print(ht);
	printf("\n");

	/* Test 3: Plusieurs éléments */
	printf("Test 3: Plusieurs éléments\n");
	hash_table_set(ht, "julien", "awesome");
	hash_table_set(ht, "bob", "builder");
	hash_table_set(ht, "alice", "wonderland");
	hash_table_set(ht, "charlie", "chocolate");
	printf("Contenu: ");
	hash_table_print(ht);
	printf("\n");

	/* Test 4: Mise à jour d'une valeur */
	printf("Test 4: Mise à jour de 'betty'\n");
	hash_table_set(ht, "betty", "amazing");
	printf("Contenu: ");
	hash_table_print(ht);
	printf("\n");

	/* Test 5: Valeur vide */
	printf("Test 5: Ajout d'une valeur vide\n");
	hash_table_set(ht, "empty", "");
	printf("Contenu: ");
	hash_table_print(ht);
	printf("\n");

	/* Test 6: Collision */
	printf("Test 6: Test avec collision\n");
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "heliotropes", "neuronophagy");
	printf("Contenu: ");
	hash_table_print(ht);
	printf("\n");

	/* Test 7: Table NULL */
	printf("Test 7: Table NULL (ne doit rien afficher)\n");
	printf("Contenu: ");
	hash_table_print(NULL);
	printf("(Rien affiché, c'est normal)\n\n");

	/* Test 8: Petite table avec collisions */
	printf("Test 8: Petite table (taille 10) avec plusieurs éléments\n");
	petite_table = hash_table_create(10);
	hash_table_set(petite_table, "a", "1");
	hash_table_set(petite_table, "b", "2");
	hash_table_set(petite_table, "c", "3");
	hash_table_set(petite_table, "d", "4");
	hash_table_set(petite_table, "e", "5");
	printf("Contenu: ");
	hash_table_print(petite_table);
	printf("\n");

	/* Test 9: Affichage d'index pour comprendre l'ordre */
	printf("Test 9: Visualisation des index\n");

	for (i = 0; i < 5; i++)
	{
		unsigned long int idx = key_index((unsigned char *)cles[i],
			ht->size);
		printf("  '%s' → index %lu\n", cles[i], idx);
	}
	printf("Table ordonnée par index:\n");
	hash_table_print(ht);

	printf("\n🎉 Tous les tests terminés!\n");

	return (0);
}
