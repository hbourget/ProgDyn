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