#include <stdlib.h>
#include <unistd.h>

char    **ft_split(char *str)
{   
    int i;
    char **new_array;
    int len;
    int save;
    int r;
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
            i++;
        len = 0;
        save = i;
        while(str[i] && (str[i] != ' ' && (!(str[i] >= 9 && str[i] <= 13))))
        {
            i++;
            len++;
        }
        r = 0;
        if(new_array[1] = (char*)malloc(sizeof(char) * len + 1))
        {
            while(str[save] && (str[save] != ' ' || (!(str[save] >= 9 && str[save] <= 13))))
            {
                new_array[1][r] = str[save];
                r++;
            }
            new_array++;
            r = 0;
        }
    }
    
}

int main(void)
{   
    int i;
    i = 0;
    char *str = "Kirill Kuzmin Olegovich";
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    char **new_str;
    new_str = ft_split(str);
    return 0;
}