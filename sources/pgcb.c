#include <stdio.h>
#include <stdlib.h>

int *creerMatrice(int hauteur, int largeur)
{
    int taille = hauteur*largeur;
    int *matrice = malloc(sizeof(int)*taille);

    srand(5);

    for (int i = 0; i < taille; i++)
    {
        matrice[i] = rand() % 2;
    }

    printf("\n");
    return matrice;
}

void afficherMatrice(int hauteur, int largeur, int *matrice)
{
    for (int i = 0; i < hauteur; i++)
    {
        for (int j = 0; j < largeur; j++)
        {
            printf("%d  ", matrice[i]);
        }
        printf("\n");
    }
}
