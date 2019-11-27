#include <unistd.h>

int is_blank(char c)
{
    return(c == ' ' || c == '\t');
}

void    ft_rostring(char *str)
{
    int i;
    int next;

    i = 0;
    next = 0;
    while(is_blank(str[i]) && str[i])
        i++;
    next = i;
    while((str[next] != ' ' && str[next] != '\t' ) && str[next])
        next++;
    while(str[next])
    {
        while(is_blank(str[next]) && str[next])
            next++;
        while((str[next] != ' ' && str[next] != '\t') && str[next])
        {
            write(1, &str[next], 1);
            next++;
        }
        write(1, " ", 1);    
    }
    while(!(is_blank(str[i])) && str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_rostring(av[1]);
    }
    write(1,"\n",1);
    return 0;
}