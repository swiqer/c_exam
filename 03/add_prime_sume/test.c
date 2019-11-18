#include <unistd.h>
#include <stdio.h>

/*void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_printint(int c)
{
    if(c > 9)
        ft_printint(c / 10)
    putchar
}*/

int main(void)
{
    int i;

    i = 17;
    printf("i процент 10 = %d\n", i % 10);
    printf("i + '0' = %c\n", i + '0');
    return 0;
}