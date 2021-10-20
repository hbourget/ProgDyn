//
// Created by h.bourget on 20/10/2021.
//
#include "../headers/dicothomy.h"
#include "../headers/knapsack.h"
#include <malloc.h>
#include <stdio.h>

void test_dicothomy()
{
    int taille = 5;
    int valeur = 3;

    int *tabDicothomy = (int*) malloc(sizeof(int)*taille);
    for (int i = 0; i < taille; i++)
    {
        tabDicothomy[i] = i;
    }

    int resultat = find_by_dichotomy(tabDicothomy, taille, valeur);
    printf("%d", resultat);
}

void test_glouton()
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

    triObjets(elements, taille);
    res = remplissageSac(elements, taille, poidsMax);
    printf("\n%f", res);
}