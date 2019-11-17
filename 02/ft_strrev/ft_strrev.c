#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len;
    int i;
    char swap;

    len = 0;
    while(str[len] != '\0')
        len++;
    i = 0;
    while(len - 1 > i)
    {
        swap = str[i];
        str[i] = str[len - 1];
        str[len - 1] = swap;
        i++;
        len--;
    }
    return str;
}

int main(void)
{
    char str[10] = "Kirill";
    printf("%s\n", ft_strrev(str));
    return 0;
}