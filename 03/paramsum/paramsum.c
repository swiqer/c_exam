#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void int_to_char(int number)
{
    if(number > 9)
        int_to_char(number / 10);
    ft_putchar(number % 10 + '0');
    
}

int main(int ac, char **av)
{  
    av[1] = "0";
    int_to_char(ac - 1);
    write(1, "\n", 1);
    return 0;
}