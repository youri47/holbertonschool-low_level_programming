#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Imprime un nom en utilisant une fonction donnée
 * @name: Le nom à imprimer
 * @f: Pointeur vers la fonction à utiliser pour imprimer
 *
 * Description: Cette fonction prend un nom et un pointeur de fonction,
 * puis utilise cette fonction pour imprimer le nom.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
