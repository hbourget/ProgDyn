#include <stdio.h>
#include <stdlib.h>
#include "../headers/pgcb.h"

/**
 * @brief Création de la matrice
 *
 * @param hauteur Hauteur de la matrice
 * @param largeur Largeur de la matrice
 * @return Retourne la matrice alimentée
 */
int *creerMatrice(int hauteur, int largeur)
{
    int taille = hauteur*largeur;
    int *matrice = malloc(sizeof(int)*taille);

    srand(50);

    //Affection à 0 pour toutes les cases de la matrice
    for (int i = 0; i < taille; i++)
    {
        matrice[i] = 0;
    }

    //Affection de 0 ou 1 toutes les 5 cases de la matrice
    for (int j = 0; j < taille; j+=5)
    {
        matrice[j] = rand() % 2;
    }

    return matrice;
}

/**
 * @brief Affichage de la matrice
 *
 * @param hauteur Hauteur de la matrice
 * @param largeur Largeur de la matrice
 * @param matrice Référence sur notre matrice créée plus tôt
 */
void afficherMatrice(int const *matrice, int hauteur, int largeur)
{
    int pos = 0;
    for (int i = 0; i < hauteur ; i++)
    {
        for (int j = 0; j < largeur; j++)
        {
            if(matrice[pos] == 0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            pos++;
        }
        printf("\n");
    }
}
