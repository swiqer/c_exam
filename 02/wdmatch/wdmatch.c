#include <unistd.h>

void wdmatch(char *str1, char *str2)
{
    int len;
    int i;

    len = 0;
    i = 0;

    while(str1[len])
        ++len;
    while(*str2 && i < len)
        (*str2++ == str1[i]) ? i++ : 0;
    if(i == len)
        write(1, str1, len);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        wdmatch(av[1],av[2]);
    }
    write(1, "\n", 1);
    return 0;
}