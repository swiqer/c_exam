#include <stdio.h>

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    unsigned int save;

    i = 0;
    while(i < size - 1)
    {
        if(tab[i] > tab[i + 1])
        {
            save = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = save;
            i = 0;
        }
        else
            i++;
    }
}

int main(void)
{   
    int i;
    i = 0;
    int tab[10] = {67,43,56,1,6,99,44,367,2,77};
    int size = 10;
    sort_int_tab(tab,size);
    while(i != size)
        printf("%i ",tab[i++]);
    printf("\n");
    return 0;
}