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

void    rev_wstr(char *str)
{
    int last;
    int i;
    int save;

    i = 0;
    last = ft_len(str) - 1;
    while(str[last] && (str[last] == ' ' || (str[last] >= 9 && str[last] <= 13)))
        last--;
    while(str[last] && (str[last] != ' ' && (!(str[last] >= 9 && str[last] <= 13))))
        last--;
    save = last;
    last++;
    while(str[save] && (str[save] == ' ' || (str[save] >= 9 && str[save] <= 13)))
        save--;
    while(str[last] && (str[last] != ' ' && (!(str[last] >= 9 && str[last] <= 13))))
    {
        write(1, &str[last], 1);
        last++;
    }
    write(1, " ", 1);
    while(str[i] && i < save)
    {
        while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
            i++;
        while(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))))
        {
            write(1, &str[i], 1);
            i++;
        }
        if(str[i] && i < save)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        rev_wstr(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}