#include "3-calc.h"

/**
 * main - Programme calculatrice simple
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 *
 * Description: Effectue des opérations simples entre deux nombres.
 * Usage: calc num1 operator num2
 *
 * Return: 0 en cas de succès, code d'erreur sinon
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
