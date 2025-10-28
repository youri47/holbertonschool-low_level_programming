#include <stdio.h>

/**
 * mul - Fonction qui multiplie deux entiers
 * @a: premier entier
 * @b: deuxième entier
 *
 * Retourne: le produit de a et b
 */
int mul(int a, int b)
{
    return a * b;
}

// Exemple d’utilisation :
int main(void)
{
    int resultat = mul(6, 7);
    printf("Le résultat est : %d\n", resultat);
    return 0;
}

