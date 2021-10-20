//
// Created by h.bourget on 20/10/2021.
//

#ifndef PROGRAMMATIONDYNAMIQUE_KNAPSACK_H
#define PROGRAMMATIONDYNAMIQUE_KNAPSACK_H

typedef struct {
    float valeur;
    float poids;
} Objet;

glouton(Objet *items, int poidsMax);

#endif //PROGRAMMATIONDYNAMIQUE_KNAPSACK_H
