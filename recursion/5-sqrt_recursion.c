#include "main.h"

/**
 * check_sqrt - Helper function to find square root
 * @n: The number to find square root of
 * @i: The current number to test
 *
 * Return: The square root if found, -1 otherwise
 */
int check_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find square root of
 *
 * Return: Natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_sqrt(n, 0));
}
