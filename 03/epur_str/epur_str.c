#include <unistd.h>
#include <stdio.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_len(char *str)
{   
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

void epur_str(char *str)
{   
    int len; 
    int i;

    len = ft_len(str);
     while(str[len] && (str[len] == ' ' || (str[len] >= 9 && str[len] <= 13)))
            len--;
    while(str[i] > str[len])
    {   
        while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
            i++;
        while(str[i] && (str[i] != ' ' || (str[i] <= 9 && str[i] >= 13)))
        {
            ft_putchar(str[i]);
            i++;
        }
        if(i < len - 1 )
           write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {   
        epur_str(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}