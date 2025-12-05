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
    dlistint_t *nouveau;
    dlistint_t liste = {98, NULL, NULL};
    size_t n;

    tete = &liste;
    tete->next = NULL;
    tete->prev = NULL;
    
    /* Créer un nouveau noeud */
    nouveau = malloc(sizeof(dlistint_t));
    if (nouveau == NULL)
    {
        dprintf(2, "Erreur: Impossible d'allouer la mémoire\n");
        return (EXIT_FAILURE);
    }
    
    /* Initialiser le nouveau noeud */
    nouveau->n = 9;
    tete->next = nouveau;
    nouveau->prev = tete;
    nouveau->next = NULL;
    
    /* Afficher la liste */
    n = print_dlistint(tete);
    printf("-> %lu éléments\n", n);
    
    /* Libérer la mémoire */
    free(nouveau);
    
    return (EXIT_SUCCESS);
}
