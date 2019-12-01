#include <stdio.h>
#include <stdlib.h>

int     ft_len(long nb)
{
    int     len;

    len = 0;
    if(nb < 0)
    {
        nb *= -1;
        len++;
    }
    while(nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return len;
}

char    *ft_itoa(int nbr)
{   
    char    *str;
    long       n;
    int        len;

    n = nbr;
    len = ft_len(n);
    if(!(str = (char*)malloc(sizeof(char) * (len + 1))))
        return NULL;
    str[len--] = '\0';
    if(n == 0)
    {
        str[0] = 48;
        return str;
    }
    if(n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    while(n > 0)
    {
        str[len] = '0' + (n % 10); // '0' == 48(ascii)
        n /= 10;
        len--;
    }
    return (str);

}

int main(void)
{
    int number;
    //char *char_number;
    number = -23456;
    printf("number_int = %i\n", number);

    printf("number_char = %s\n", ft_itoa(number));
    //printf("number = %s\n", number);
    return 0;
}