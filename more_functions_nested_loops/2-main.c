#include <stdio.h>

int mul(int a, int b);  /* ← LE PROTOTYPE EST CRUCIAL ! */

int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(402, 1024));
    return (0);
}
