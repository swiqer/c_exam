#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len;
    int *result;

    len = (end >= start) ? end - start + 1 : start - end + 1;
    if(!(result = (int*)malloc(sizeof(int) * len)))
        return (NULL);
    while(len--)
        result[len] = (end >= start) ? start++ : start--;
    return (result);
}

int main(void)
{
    int start = -1;
    int end = 3;
    int *array;
    int i;

    i = 0;
    array = ft_rrange(start, end);
    while(array[i])
    {
        printf("%d ", array[i]);
        i++;
    }    
    return 0;
}