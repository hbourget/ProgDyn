/**
 * Recherche par dichotomie dans un tableau d'entiers
 * @param array Le tableau de valeurs
 * @param size_t La taille du tableau
 * @param value La valeur à trouver
 * @return  La position de la valeur trouvé ou -1 dans le cas contraire
 */

int find_by_dichotomy(int array[], int size_t, int value )
{
    int ret;
    int min = 0;
    int max = size_t -1;
    int millieu;

    while(min < max)
    {
        millieu = (min + max) / 2;

        if(array[millieu] > value)
        {
            max = millieu;
        }
        else
        {
            min = millieu + 1;
        }
    }

    if(array[millieu] == value)
    {
        ret = array[millieu];
    }
    else
    {
        ret = -1;
        return ret;
    }

    return ret;
}