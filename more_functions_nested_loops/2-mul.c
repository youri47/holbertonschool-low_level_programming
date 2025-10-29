#include <stdio.h>

/* Fonction directement avant main */
int mul(int a, int b)
{
    return (a * b);
}

int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(402, 1024));
    return (0);
}
