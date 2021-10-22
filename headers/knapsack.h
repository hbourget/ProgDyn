#ifndef PROGRAMMATIONDYNAMIQUE_KNAPSACK_H
#define PROGRAMMATIONDYNAMIQUE_KNAPSACK_H

typedef struct
{
    float valeur;
    float poids;
} Element;

/**
 * @brief Tri par sélection des différents objets en fonction de leur rapport qualité/prix (valeur/poids)
 *
 * @param elements Tableau d'elements (Element)
 * @param value Valeur a ajouter en haut de la pile
 */
void triElements(Element elements[], int taille);

/**
 * @brief Remplissage du sac avec le tableau trié précedemment
 *
 * @param elements Tableau d'elements (Element)
 * @param taille La taille du tableau
 * @param poidsMax Poids maximum du sac
 * @return Somme des valeurs qui se trouvent dans le sac
 */
float remplissageSac(Element elements[], int taille, int poidsMax);

#endif //PROGRAMMATIONDYNAMIQUE_KNAPSACK_H