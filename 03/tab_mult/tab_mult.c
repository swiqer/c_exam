#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void int_to_char(int x)
{
    if(x > 9)
        int_to_char(x / 10);
    ft_putchar(x % 10 + '0');
}

int mini_atoi(char *str)
{
    int number;
    
    number = 0;
    while(*str  && (*str >= '0' && *str <= '9'))    
        number = number * 10 + (*str++ - '0');
    return ((int)number);
}

void tab_mult(int n)
{
    int i;

    i = 1;
    while (i < 10)
    {
        int_to_char(i);
        write(1, " x ", 3);
        int_to_char(n);
        write(1, " = ", 3);
        int_to_char(i++ * n);
        write(1, "\n", 1);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        tab_mult(mini_atoi(av[1]));
    }
    else
        write(1, "\n", 1);
    return 0;
}