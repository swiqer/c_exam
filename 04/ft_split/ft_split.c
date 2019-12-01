#include <stdlib.h>
#include <stdio.h>

int     ft_len_ac(char *str)
{
    int i;
    int ac;

    ac = 0;
    i = 0;
    while(str[i])
    {
        while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
            i++;
        if(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))))
        {
            ac++;
            while(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))))
                i++;
        }
    }
    return ac;
}

char    *word_malloc(char *str)
{
    int len;
    char *word;

    len = 0;
    while(str[len])
        len++;
    if(!(word = (char*)malloc(sizeof(char) * len + 1)))
        return NULL;
    len = 0;
    while(str[len] && (str[len] != ' ' && (!(str[len] >= 9 && str[len] <= 13))))
    {
        word[len] = str[len];
        len++;
    }
    word[len] = '\0';
    return word;
}

char    **ft_split(char *str)
{
    char    **arr;
    int         i;
    
    if(!(arr = (char**)malloc(sizeof(char*) * (ft_len_ac(str) + 1))))
        return NULL;
    while(*str)
    {
        while(*str &&(*str == ' ' || (*str >= 9 && *str <= 13)))
            str++;
        if(*str && (*str != ' ' && (!(*str >= 9 && *str <= 13))))
        {
            arr[i] = word_malloc(str);
            i++;
            while(*str && (*str != ' ' && (!(*str >= 9 && *str <= 13))))
                str++;
        }
    }
    arr[i] = NULL;
    return arr;
}

int main(void)
{
    char *str = "Kirill Kuzmin Olegovich . /";
    char **words;
    printf("ac = %d\n", ft_len_ac(str));
    words = ft_split(str);
    printf("1 word --> %s\n", words[0]);
    printf("2 word --> %s\n", words[1]);
    printf("3 word --> %s\n", words[2]);
    printf("4 word --> %s\n", words[3]);
    printf("5 word --> %s\n", words[4]);
    return 0;
}
