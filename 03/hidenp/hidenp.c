#include <unistd.h>
#include <stdio.h>

void hidenp(char *s1, char *s2)
{
    int len;
    int i;

    len = 0;
    while(s1[len] != '\0')
        len++;
    i = 0;
    while(*s2 != '\0')
    {
        if(s1[i] == *s2)
            i++;
        s2++;
    }
    if(i == len)
        write(1, "1", 1);
    else
        write(1, "0", 1);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        hidenp(av[1], av[2]);
    }
    write(1, "\n", 1);
    return 0;
}