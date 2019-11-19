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

void    expand_str(char *str)
{
    int i;
    int len;

    len = ft_len(str);
    //printf("original len = %i\n", len);
    len--;
    while(str[len] && (str[len] == ' ' || (str[len] >= 9 && str[len] <= 13)))
        len--;
    //printf("len-- = %i\n", len);
    i = 0;
    while(i < len)
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t'))
            i++;
        while(str[i] && (str[i] != ' ' && (!(str[len] >= 9 && str[len] <= 13))))
        {
            ft_putchar(str[i]);
            i++;
        }
        if(i < len)
          write(1, "   ", 3);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        expand_str(av[1]);
    }
    write(1,"\n",1);
    return 0;
}