#include "3-calc.h"

/**
 * op_add - Additionne deux nombres
 * @a: Premier nombre
 * @b: Deuxième nombre
 *
 * Return: La somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Soustrait deux nombres
 * @a: Premier nombre
 * @b: Deuxième nombre
 *
 * Return: La différence de a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplie deux nombres
 * @a: Premier nombre
 * @b: Deuxième nombre
 *
 * Return: Le produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divise deux nombres
 * @a: Premier nombre
 * @b: Deuxième nombre
 *
 * Return: Le quotient de a et b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calcule le modulo de deux nombres
 * @a: Premier nombre
 * @b: Deuxième nombre
 *
 * Return: Le reste de la division de a par b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
