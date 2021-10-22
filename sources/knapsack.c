#include "../headers/knapsack.h"

/**
 * @brief Tri par sélection des différents objets en fonction de leur rapport qualité/prix (valeur/poids)
 *
 * @param elements Tableau d'elements (Element)
 * @param value Valeur a ajouter en haut de la pile
 */
void triElements(Element elements[], int taille)
{
    int i,j;
    float tmpPoids, tmpValeur;

    for(i = 0; i < taille-1; i++)
    {
        for(j = i+1; j < taille; j++)
        {
            if (elements[i].valeur/elements[i].poids < elements[j].valeur/elements[j].poids)
            {
                tmpPoids = elements[i].poids;
                tmpValeur = elements[i].valeur;
                elements[i] = elements[j];
                elements[j].poids = tmpPoids;
                elements[j].valeur= tmpValeur;
            }
        }
    }
}

/**
 * @brief Remplissage du sac avec le tableau trié précedemment
 *
 * @param elements Tableau d'elements (Element)
 * @param taille La taille du tableau
 * @param poidsMax Poids maximum du sac
 * @return Somme des valeurs qui se trouvent dans le sac
 */
float remplissageSac(Element elements[], int taille, int poidsMax)
{
    float valeurTotal = 0;
    for (int i = 0; i < taille; ++i)
    {
        if(elements[i].poids <= poidsMax)
        {
            valeurTotal = valeurTotal + elements[i].valeur;
            poidsMax = poidsMax - valeurTotal;
        }
    }
    return valeurTotal;
}