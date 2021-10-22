#ifndef PROGRAMMATIONDYNAMIQUE_KNAPSACK_H
#define PROGRAMMATIONDYNAMIQUE_KNAPSACK_H

typedef struct
{
    float valeur;
    float poids;
} Element;

void triElements(Element elements[], int taille);

float remplissageSac(Element elements[], int taille, int poidsMax);

#endif //PROGRAMMATIONDYNAMIQUE_KNAPSACK_H