#include <stdio.h>
#include "headers/misc.h"
#include "headers/dicothomy.h"
#include "headers/glouton.h"

int main()
{
    int taille = 5;
    int valeur = 3;
    int *tabDicothomy = getSortedTab(taille);

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


    int resultat = find_by_dichotomy(tabDicothomy, taille, valeur);
    printf("%d", resultat);

    for (int i = 0; i < 5; ++i)
    {

    }
}
