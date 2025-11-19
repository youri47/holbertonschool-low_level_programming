#include "3-calc.h"

/**
 * get_op_func - Sélectionne la bonne fonction d'opération
 * @s: L'opérateur passé en argument
 *
 * Description: Cette fonction compare l'opérateur donné avec
 * les opérateurs disponibles et retourne un pointeur vers
 * la fonction correspondante.
 *
 * Return: Pointeur vers la fonction correspondant à l'opérateur,
 * ou NULL si l'opérateur n'est pas trouvé
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
