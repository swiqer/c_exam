#include <unistd.h>

int not_seen_before(char *s, int max_pos, char c)
{
    int i;

    i = -1;
    while(++i < max_pos)
        if(s[i] == c)
            return (0);
    return (1);
}

void ft_union(char *s1, char *s2)
{
    int x;
    int y;

    x = -1;
    while(s1[++x])
        if(not_seen_before(s1, x, s1[x]))
            write(1, &s1[x], 1);
    y = -1;
    while(s2[++y])
        if(not_seen_before(s1, x, s2[y]) && not_seen_before(s2, y, s2[y]))
            write(1, &s2[y], 1);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        ft_union(av[1],av[2]);
    }
    write(1, "\n", 1);
    return 0;
}
