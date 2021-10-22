#include "../headers/dichotomy.h"
#include "../headers/knapsack.h"
#include "../headers/pgcb.h"
#include <malloc.h>
#include <assert.h>
/**
 * @brief Tests unitaires pour la recherche par dicothomy.
 */
void test_dichotomy()
{
    int taille = 50;
    int valeur = 17;

    int *tabDicothomy = malloc(sizeof(int)*taille);
    for (int i = 0; i < taille; i++)
    {
        tabDicothomy[i] = i;
    }

    int resultat = find_by_dichotomy(tabDicothomy, taille, valeur);
    assert(resultat == 17);
}

/**
 * @brief Tests unitaires pour le problème du sac à dos.
 */
void test_knapsack()
{
    int taille = 3;
    int poidsMax = 10;
    float res;

    Element elements[taille];
    Element monElement1; monElement1.poids = 6; monElement1.valeur = 7;
    Element monElement2; monElement2.poids = 5; monElement2.valeur = 5;
    Element monElement3; monElement3.poids = 5; monElement3.valeur = 5;

    elements[0] = monElement1;
    elements[1] = monElement2;
    elements[2] = monElement3;

    triElements(elements, taille);
    res = remplissageSac(elements, taille, poidsMax);
    assert(res == 7.0);
}

void test_pgcb()
{
    int hauteur = 50;
    int largeur = 90;

    int *matrice = creerMatrice(hauteur, largeur);
    //assert(matrice[hauteur*largeur] == 0 || matrice[hauteur*largeur] == 1);

    afficherMatrice(hauteur, largeur, matrice);
}