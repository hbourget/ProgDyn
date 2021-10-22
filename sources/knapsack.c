#include "../headers/knapsack.h"

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