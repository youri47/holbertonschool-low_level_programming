#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Structure pour les opérateurs
 * @op: L'opérateur (caractère)
 * @f: La fonction associée à l'opérateur
 *
 * Description: Structure qui associe un opérateur à sa fonction
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototypes des fonctions d'opération */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Prototype de la fonction qui sélectionne l'opération */
int (*get_op_func(char *s))(int, int);

#endif 
