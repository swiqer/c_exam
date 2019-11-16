#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void last_word(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    i--;
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i--;
    while(str[i] && (str[i] != ' ' && str[i] != '\t'))
        i--;
    i++;
    while(str[i] && (str[i] != ' ' && str[i] != '\t'))
    {
       write(1,&str[i],1);
       i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        last_word(av[1]);
    }
    write(1, "\n", 1);
    return 0;
}