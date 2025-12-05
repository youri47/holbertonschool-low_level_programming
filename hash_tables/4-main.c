#include "hash_tables.h"

/**
 * main - Teste la fonction hash_table_get
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
	hash_table_t *ht;
	char *valeur;

	printf("=== Tests de hash_table_get ===\n\n");

	/* Créer et remplir une table de hachage */
	ht = hash_table_create(1024);
	if (ht == NULL)
	{
		printf("❌ Échec de création de la table\n");
		return (1);
	}

	printf("Création et remplissage de la table...\n");
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "julien", "awesome");
	hash_table_set(ht, "bob", "builder");
	hash_table_set(ht, "alice", "wonderland");
	hash_table_set(ht, "charlie", "chocolate");
	printf("✓ 5 éléments ajoutés\n\n");

	/* Test 1: Récupérer une valeur existante */
	printf("Test 1: Récupérer des valeurs existantes\n");
	valeur = hash_table_get(ht, "betty");
	if (valeur != NULL)
		printf("  betty: %s\n", valeur);
	else
		printf("  ❌ betty non trouvée\n");

	valeur = hash_table_get(ht, "julien");
	if (valeur != NULL)
		printf("  julien: %s\n", valeur);
	else
		printf("  ❌ julien non trouvé\n");

	valeur = hash_table_get(ht, "bob");
	if (valeur != NULL)
		printf("  bob: %s\n\n", valeur);
	else
		printf("  ❌ bob non trouvé\n\n");

	/* Test 2: Récupérer une clé qui n'existe pas */
	printf("Test 2: Récupérer une clé inexistante\n");
	valeur = hash_table_get(ht, "nonexistent");
	if (valeur == NULL)
		printf("  ✓ NULL retourné pour clé inexistante\n\n");
	else
		printf("  ❌ Devrait retourner NULL!\n\n");

	/* Test 3: Mise à jour puis récupération */
	printf("Test 3: Mise à jour d'une valeur\n");
	printf("  Avant: betty = %s\n", hash_table_get(ht, "betty"));
	hash_table_set(ht, "betty", "amazing");
	printf("  Après: betty = %s\n", hash_table_get(ht, "betty"));
	printf("  ✓ Valeur mise à jour correctement\n\n");

	/* Test 4: Clé vide */
	printf("Test 4: Recherche avec clé vide\n");
	valeur = hash_table_get(ht, "");
	if (valeur == NULL)
		printf("  ✓ NULL retourné pour clé vide\n\n");
	else
		printf("  ❌ Devrait retourner NULL!\n\n");

	/* Test 5: Paramètres NULL */
	printf("Test 5: Tests avec paramètres NULL\n");
	valeur = hash_table_get(NULL, "betty");
	if (valeur == NULL)
		printf("  ✓ NULL retourné pour table NULL\n");

	valeur = hash_table_get(ht, NULL);
	if (valeur == NULL)
		printf("  ✓ NULL retourné pour clé NULL\n\n");

	/* Test 6: Valeur vide */
	printf("Test 6: Valeur vide (autorisée)\n");
	hash_table_set(ht, "empty", "");
	valeur = hash_table_get(ht, "empty");
	if (valeur != NULL)
		printf("  ✓ Valeur vide récupérée: '%s' (longueur: %lu)\n\n",
			valeur, strlen(valeur));
	else
		printf("  ❌ Devrait retourner une chaîne vide, pas NULL\n\n");

	printf("🎉 Tous les tests terminés!\n");

	return (0);
}
