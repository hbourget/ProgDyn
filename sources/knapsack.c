//
// Created by h.bourget on 20/10/2021.
//
#include "../headers/knapsack.h"

void triObjets(Element elements[], int taille)
{
    int i,j;
    float tempPoids, tempsValeur;

    for(i = 0; i < taille-1; i++)
    {
        for(j = i+1; j < taille; j++)
        {
            if (elements[i].valeur/elements[i].poids < elements[j].valeur/elements[j].poids)
            {
                tempPoids = elements[i].poids;
                tempsValeur = elements[i].valeur;
                elements[i] = elements[j];
                elements[j].poids = tempPoids;
                elements[j].valeur= tempsValeur;
            }
        }
    }
}

float remplissageSac(Element elements[], int taille, int poidsMax)
{
    float valeurTotal;
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