#include <stdio.h>
#include "main.h"

/**
 * main - test the _islower function
 *
 * Return: Always 0
 */
int main(void)
{
    char c;

    for (c = 'A'; c <= 'z'; c++)
    {
        if (_islower(c))
            printf("%c is lowercase\n", c);
        else
            printf("%c is not lowercase\n", c);
    }
    return (0);
}
