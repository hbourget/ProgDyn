#include "headers/tests.h"
#include <stdio.h>
int main()
{
    test_dichotomy();
    printf("Test dichotomy: OK");

    test_knapsack();
    printf("\nTest sac a dos: OK\n");

    printf("Affichage de la matrice...\n\n");
    test_pgcb();

    printf("\nFin des tests unitaires.\n");
}