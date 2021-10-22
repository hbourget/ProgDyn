#include <stdio.h>
#include <stdlib.h>

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

    srand(255);

    for (int i = 0; i < taille; i++)
    {
        matrice[i] = rand() % 2;
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
void afficherMatrice(int hauteur, int largeur, int *matrice)
{
    int pas = 0;
    for (int i = 0; i < hauteur ; i++)
    {
        for (int j = 0; j < largeur; j++)
        {
            if(matrice[pas] == 0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
            pas++;
        }
        printf("\n");
    }
}