#include "hash_tables.h"

/**
 * main - Teste la fonction hash_table_delete
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	hash_table_t *ht;
	hash_table_t *petite_table;

	printf("=== Tests de hash_table_delete ===\n\n");

	/* Test 1: Suppression d'une table vide */
	printf("Test 1: Suppression d'une table vide\n");
	ht = hash_table_create(1024);
	printf("  Table créée (vide)\n");
	hash_table_delete(ht);
	printf("  ✓ Table supprimée sans erreur\n\n");

	/* Test 2: Suppression d'une table avec un élément */
	printf("Test 2: Suppression d'une table avec un élément\n");
	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	printf("  Table créée avec 1 élément\n");
	printf("  Contenu: ");
	hash_table_print(ht);
	hash_table_delete(ht);
	printf("  ✓ Table supprimée sans erreur\n\n");

	/* Test 3: Suppression d'une table avec plusieurs éléments */
	printf("Test 3: Suppression d'une table avec plusieurs éléments\n");
	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "julien", "awesome");
	hash_table_set(ht, "bob", "builder");
	hash_table_set(ht, "alice", "wonderland");
	hash_table_set(ht, "charlie", "chocolate");
	printf("  Table créée avec 5 éléments\n");
	printf("  Contenu: ");
	hash_table_print(ht);
	hash_table_delete(ht);
	printf("  ✓ Table supprimée sans erreur\n\n");

	/* Test 4: Suppression d'une table avec collisions */
	printf("Test 4: Suppression d'une table avec collisions\n");
	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "mentioner");
	hash_table_set(ht, "heliotropes", "neuronophagy");
	hash_table_set(ht, "depravement", "serafins");
	hash_table_set(ht, "stylist", "subgenera");
	hash_table_set(ht, "joyful", "synaphea");
	hash_table_set(ht, "diurite", "rappel");
	hash_table_set(ht, "urites", "usucapt");
	printf("  Table créée avec 7 éléments (possibles collisions)\n");
	printf("  Contenu: ");
	hash_table_print(ht);
	hash_table_delete(ht);
	printf("  ✓ Table supprimée sans erreur\n\n");

	/* Test 5: Suppression d'une petite table */
	printf("Test 5: Suppression d'une petite table (taille 10)\n");
	petite_table = hash_table_create(10);
	hash_table_set(petite_table, "a", "1");
	hash_table_set(petite_table, "b", "2");
	hash_table_set(petite_table, "c", "3");
	hash_table_set(petite_table, "d", "4");
	hash_table_set(petite_table, "e", "5");
	printf("  Table créée avec 5 éléments\n");
	printf("  Contenu: ");
	hash_table_print(petite_table);
	hash_table_delete(petite_table);
	printf("  ✓ Table supprimée sans erreur\n\n");

	/* Test 6: Suppression d'une table NULL */
	printf("Test 6: Suppression d'une table NULL (ne doit rien faire)\n");
	hash_table_delete(NULL);
	printf("  ✓ Aucune erreur avec NULL\n\n");

	/* Test 7: Test de cycle complet */
	printf("Test 7: Cycle complet (créer, utiliser, supprimer)\n");
	ht = hash_table_create(50);
	printf("  1. Table créée\n");

	hash_table_set(ht, "langage", "C");
	hash_table_set(ht, "projet", "hash_table");
	hash_table_set(ht, "ecole", "Holberton");
	printf("  2. Données ajoutées\n");

	printf("  3. Contenu: ");
	hash_table_print(ht);

	printf("  4. Lecture: langage = %s\n", hash_table_get(ht, "langage"));
	printf("  5. Lecture: projet = %s\n", hash_table_get(ht, "projet"));

	hash_table_delete(ht);
	printf("  6. Table supprimée\n");
	printf("  ✓ Cycle complet réussi!\n\n");

	printf("🎉 Tous les tests terminés!\n");
	printf("\nNote: Pour vérifier les fuites mémoire, utilise Valgrind:\n");
	printf("      valgrind --leak-check=full ./hash_delete\n");

	return (0);
}
