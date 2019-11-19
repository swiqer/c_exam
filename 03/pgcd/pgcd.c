#include <stdio.h>
#include <stdlib.h>

int   ft_pgcd(unsigned int s1, unsigned int s2)
{
    int denominator;

    denominator = s1;
    while(denominator > 0)
    {
        if(s1 % denominator == 0 && s2 % denominator == 0)
            return(denominator);
        denominator--;
    }
    return 1;
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        printf("%d", ft_pgcd(atoi(av[1]), atoi(av[2])));
    }
    printf("\n");
    return 0;
}