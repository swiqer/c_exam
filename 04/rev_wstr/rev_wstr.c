#include <unistd.h>
#include <stdio.h>

int ft_len(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

void    ft_rev_wstr(char *str)
{
    int len;
    int save;
    int tab;

    tab = 0;
    while(str[tab] && (str[tab] == ' ' || (str[tab] >= 9 && str[tab] <= 13)))
        tab++;
    len = ft_len(str) - 1;
    while(len > tab)
    {
        while(str[len] && (str[len] == ' ' || (str[len] >= 9 && str[len] <= 13)))
            len--;
        while(str[len] && (str[len] != ' ' && (!(str[len] >= 9 && str[len] <= 13))))
            len--;
        len++;
        save = len;
        len--;
        while (str[save] && (str[save] != ' ' && (!(str[save] >= 9 && str[save] <= 13))))
        {
            write(1, &str[save], 1);
            save++;
        }
        if(len > tab)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_rev_wstr(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}