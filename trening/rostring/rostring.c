#include <unistd.h>
#include <stdio.h>

void    ft_rostring(char *str)
{
    int i;
    int save;
    int len;

    len = 0;
    while(str[len])
        len++;
    len--;
    while(str[len] && (str[len] == ' ' || (str[len] >= 9 && str[len] <= 13)))
        len--;
    i = 0;
    while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    save = i;
    while(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))))
        i++;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
            i++;
        while(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))))
        {
            write(1, &str[i], 1);
            i++;
        }
        if(i < len)
            write(1, " ", 1);
    }
    write(1, " ", 1);
    while(str[save] && (str[save] != ' ' && (!(str[save] >= 9 && str[save] <= 13))))
    {
        write(1, &str[save], 1);
        save++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_rostring(av[1]);
    }
    write(1, "\n", 2);
    return 0;
}