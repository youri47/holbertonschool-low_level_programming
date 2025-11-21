#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - Structure pour associer un type a une fonction
 * @symbol: Le caractere representant le type
 * @func: Pointeur vers la fonction d'affichage
 */
typedef struct printer
{
	char *symbol;
	void (*func)(va_list);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
