#include <stdio.h>

/* Prototype de la fonction */
int mul(int a, int b);

/* Définition de la fonction mul */
int mul(int a, int b) {
    return a * b;
}

/* Fonction principale */
int main() {
    int x = 5;
    int y = 3;
    int resultat;
    
    resultat = mul(x, y);
    printf("%d × %d = %d\n", x, y, resultat);
    
    return 0;
}
