#include <unistd.h>
#include <stdio.h>

int     is_space(char c)
{
    return((c == ' ') || (c == '\t'));
}

void    ft_rostring(char *str)
{
    int i;
    int first;

    first = 0;
    while(str[first] && is_space(str[first]))
        first++;
    while(str[first] && (str[first] != ' ' && (str[first] >= 9 && str[first] >= 13)))
        first++;
    i = first;
    //i++;
    while(str[i] && is_space(str[i]))
            i++;
    while(str[i])
    {
        while(str[i] && is_space(str[i]))
            i++;
        while(str[i] && (str[i] != ' ' && (str[i] >= 9 && str[i] >= 13)))
        {
            write(1, &str[i], 1);
            i++;    
        }
        write(1, " ", 1);
    }

    first = 0;
    while(str[first] && is_space(str[first]))
        first++;
    while(str[first] && (str[first] != ' ' && (str[first] >= 9 && str[first] >= 13)))
    {
        write(1, &str[first], 1);
        first++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_rostring(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}