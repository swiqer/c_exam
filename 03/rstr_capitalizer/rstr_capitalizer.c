#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void rstr_capitalizer(char *str)
{
    int i;
    int len;

    i = 0;
    while(str[i] != '\0')
    {
        while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        {
            ft_putchar(str[i]);
            i++;
        }
        len = i;
        while(str[len] && (str[len] != ' ' && (!(str[len] >= 9 && str[len] <= 13))))
            len++;
        len--;
        while(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))) && i < len)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                ft_putchar(str[i] + 32);
                i++;
            }
            else if(i < len)
            {
                ft_putchar(str[i]);
                i++;
            }
        }
        if(str[i] && (str[i] >= 'a' && str[i] <= 'z'))
        {
            ft_putchar(str[i] - 32);
            i++;
        }
        else if(str[i])
        {
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
            write(1, "\n",1);
        }
    }
    else 
        write(1, "\n",1);
    return 0;
}