#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rstr_capitalizer(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        while(str[i] &&(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        {
            ft_putchar(str[i]);
            i++;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {    
            ft_putchar(str[i] - 32);
            i++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {    
            ft_putchar(str[i]);
            i++;
        }
        while(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))))
        {   
            if(str[i] >= 'A' && str[i] <= 'Z')
                ft_putchar(str[i] + 32);
            else 
                ft_putchar(str[i]);
            i++;
        }
    }
}

int main(int ac, char **av)
{
    if(ac > 1)
    {
        ++av;
        while(*av)
        {
            rstr_capitalizer(*av++);
            write(1, "\n", 1);
        }
    }
    return 0;
}