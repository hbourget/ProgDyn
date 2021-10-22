#ifndef PROGDYN_PGCB_H
#define PROGDYN_PGCB_H

typedef struct
{
    int x;
    int y;
    int taille;
} Coordonee;

int * creerMatrice(int hauteur, int largeur);

void afficherMatrice(int hauteur, int largeur, int const *matrice);

Coordonee trouverPGCB(int const *matrice);

#endif //PROGDYN_PGCB_H
