//
// Created by h.bourget on 20/10/2021.
//
#include "../headers/glouton.h"

triObjets(Objet objets[], int taille)
{
    int i,j;
    float tempPoids, tempsValeur;

    for(i = 0; i < taille-1; i++)
    {
        for(j = i+1; j < taille; j++)
        {
            if (objets[i].valeur/objets[i].poids > objets[j].valeur/objets[j].poids)
            {
                tempPoids = objets[i].poids;
                tempsValeur = objets[i].valeur;
                objets[i] = objets[j];
                objets[j].poids = tempPoids;
                objets[j].valeur= tempsValeur;
            }
        }
    }
}