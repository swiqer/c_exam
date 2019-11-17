#include <unistd.h>

void ft_putchar(char  c)
{
    write(1, &c, 1);
}

int alpha_mirror(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
            ft_putchar('m' - (*str - 'n'));
        else if(*str >= 65 && *str <= 90)
            ft_putchar('M' - (*str - 'N'));
        else
            ft_putchar(*str);
        str++;
    }
    return 0;
}

int main(int ac, char **av)
{
    if( ac == 2)
    {
        alpha_mirror(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}