#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - vérifie le code
 *
 * Return: Toujours EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *tete;

    tete = NULL;
    
    /* Ajouter des noeuds */
    add_dnodeint_end(&tete, 0);
    add_dnodeint_end(&tete, 1);
    add_dnodeint_end(&tete, 2);
    add_dnodeint_end(&tete, 3);
    add_dnodeint_end(&tete, 4);
    add_dnodeint_end(&tete, 98);
    add_dnodeint_end(&tete, 402);
    add_dnodeint_end(&tete, 1024);
    
    /* Afficher la liste */
    print_dlistint(tete);
    
    /* Libérer toute la liste */
    free_dlistint(tete);
    
    tete = NULL;
    
    printf("Liste libérée avec succès!\n");

    return (EXIT_SUCCESS);
}
