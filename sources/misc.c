//
// Created by h.bourget on 20/10/2021.
//
#include <malloc.h>
#include "../headers/glouton.h"

int *getSortedTab(int taille)
{
    int *tab = (int*) malloc(sizeof(int)*taille);
    for (int i = 0; i < taille; i++)
    {
        tab[i] = i;
    }
    return tab;
}

Objet *getSortedTabStruc(int taille)
{
    Objet objets[5];
    Objet monItem1; monItem1.poids = 3; monItem1.valeur = 1;
    Objet monItem2; monItem2.poids = 5; monItem2.valeur = 4;
    Objet monItem3; monItem3.poids = 2; monItem3.valeur = 5;
    Objet monItem4; monItem4.poids = 7; monItem4.valeur = 9;
    Objet monItem5; monItem5.poids = 6; monItem5.valeur = 3;

    objets[0] = monItem1;
    objets[1] = monItem2;
    objets[2] = monItem3;
    objets[3] = monItem4;
    objets[4] = monItem5;

    return objets;
}