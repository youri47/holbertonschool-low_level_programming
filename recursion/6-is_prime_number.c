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
```

## 🔍 **Explication :**

**Fonction principale `is_prime_number` :**
- Si `n <= 1`, retourne `0` (pas premier par définition)
- Si `n == 2`, retourne `1` (2 est le seul nombre premier pair)
- Sinon, appelle `check_prime` en commençant avec diviseur `i = 2`

**Fonction helper `check_prime` :**
- Si `i × i > n`, on a testé tous les diviseurs possibles → `n` est premier !
- Si `n % i == 0`, `n` est divisible par `i` → pas premier
- Sinon, continue avec `i + 1`

**Optimisation :** On teste seulement jusqu'à √n car si n a un diviseur > √n, il a forcément un diviseur < √n.

**Exemple avec is_prime_number(17) :**
```
is_prime_number(17)
→ check_prime(17, 2)  → 17%2=1  ✓ Continue
→ check_prime(17, 3)  → 17%3=2  ✓ Continue
→ check_prime(17, 4)  → 17%4=1  ✓ Continue
→ check_prime(17, 5)  → 5×5=25 > 17 → Retourne 1 (premier!)
```

**Exemple avec is_prime_number(10) :**
```
is_prime_number(10)
→ check_prime(10, 2)  → 10%2=0  ✗ Retourne 0 (pas premier)

📋 2. Mettre à jour main.h (IMPORTANT !)
bashvi main.h
Ajoute le prototype :
c#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);

#endif

🧪 3. Fichier de test 6-main.c
c#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
}
