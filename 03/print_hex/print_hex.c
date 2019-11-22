#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
/*void ft_print_hex(int n)
{
    char *str;
    str = "0123456789abcdef";
    if(n == 0)
      write(1, "0", 1);
    while(n)
    {   
        write(1, &str[n % 16], 1);
        n /= 16;
    }
}*/
/*void	ft_print_hex(int n)
{
	if (n >= 16)
		ft_print_hex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}*/

void	ft_print_hex(unsigned int n)
{
	if (n >= 16)
		ft_print_hex(n / 16);
	if (n % 16 < 10)
		ft_putchar((n % 16) + 48);
	else
		ft_putchar((n % 16) - 10 + 97);
}

int ft_atoi(char *str)
{
    int i;
    int omen;
    int result;
    
    omen = 1;
    i = 0;
    while(str[i] && str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-')
    {    
        omen = -1;
        i++;
    }
    if(str[i] == '+')
        i++;
    result = 0;
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return ((int)omen * (int)result);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_print_hex(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
    return 0;
}