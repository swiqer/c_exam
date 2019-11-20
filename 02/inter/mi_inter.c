#include <unistd.h>

int ft_chek(char *s, int max_pos, char c)
{
    int i;

    i = -1;
    while(++i < max_pos)
    {
        if(s[i] == c)
            return 0;
    }
    return 1;
}

void    ft_inter(char *s1, char *s2)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(s1[i] != '\0')
    {
        if(ft_chek(s1, i, s1[i]))
        {   
            while(s2[j])
            {
                if(s1[i] == s2[j])
                {
                    write(1, &s1[i], 1);
                    break;
                }
                j++;
            }
        }
        j = 0;
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        ft_inter(av[1], av[2]);
    }
    write(1, "\n", 1);
    return 0;
}