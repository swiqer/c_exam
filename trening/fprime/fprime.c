#include <stdio.h>
#include <stdlib.h>

void    ft_fprime(int num)
{
    int i;
    
    if( num == 1)
        printf("1");
    i = 2;
    while(num > 1)
    {
        if(num % i == 0)
        {
            printf("%i", i);
            num /= i;
            if(num > 1)
                printf("*");
            i--;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_fprime(atoi(av[1]));
    }
    printf("\n");
    return 0;
}