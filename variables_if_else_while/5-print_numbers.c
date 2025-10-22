#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int singleDigit = 0;

    while (singleDigit < 10)
    {
        putchar(singleDigit + '0'); 
        singleDigit++;
    }

    putchar('\n');

    return (0);
}
