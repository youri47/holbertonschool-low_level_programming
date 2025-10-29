#include <stdio.h>

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of a * b
 */
int mul(int a, int b)
{
    return (a * b);
}

int main(void)
{
    int resultat;
    
    resultat = mul(5, 4);
    printf("5 * 4 = %d\n", resultat);
    
    resultat = mul(-3, 7);
    printf("-3 * 7 = %d\n", resultat);
    
    resultat = mul(10, 0);
    printf("10 * 0 = %d\n", resultat);
    
    return (0);
}
