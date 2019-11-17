#include <stdio.h>

int retrun(char c)
{
    if(c == 'h')
        return 0;
    return 1;
}

int main(void)
{
    char c;

    c = 'c';
    if(retrun(c))
        printf("c != h");
    return 0;
}