#include <stdio.h>
#include <stdlib.h>

void    ft_fprime(int n)
{
    unsigned int dec;

    if(n == 1)
        printf("1");
    else 
    {
        dec = 2;
        while(n > 1)
        {
            if(n % dec == 0)
            {
                printf("%d", dec);
                n = n / dec;
                if(n > 1)
                    printf("*");
                dec--;
            }
            dec++;
        }
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