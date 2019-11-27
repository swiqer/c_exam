#include <stdio.h>

void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int save;

    i = 0;
    save = 0;
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
    int a[6] = {1,5,3,2,7,1};
    int size = 6;
    int i = 0;
    sort_int_tab(a,size);
    while(i != size)
        printf("%d ", a[i++]);
    return 0;
}