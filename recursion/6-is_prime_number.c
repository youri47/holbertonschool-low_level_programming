#include "main.h"

/**
 * check_prime - Helper function to check if n is divisible by i
 * @n: The number to check
 * @i: The current divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (check_prime(n, 2));
}
