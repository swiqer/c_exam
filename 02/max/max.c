#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{   
    int max;

    if(!len)
        return(0);
    max = tab[--len];
    while(len--)
        if(tab[len] > max)
            max = tab[len];
    return max;
}

int main(void)
{
    int *tab;

    if(!(tab =(int*)malloc(sizeof(int)*3)))

    tab[0] = 1;
    tab[1] = 3;
    tab[2] = 1;
    printf("MAX SIZE = %i\n", max(tab, 3));
    return 0;
}
