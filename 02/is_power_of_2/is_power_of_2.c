#include <stdio.h>

int     is_power_of_2(unsigned int n)
{
    if(n == 0)
        return 0;
    while(n % 2 == 0)
        n = n / 2;
    return ((n == 1) ? 1 : 0);
}

int main(void)
{
    int number;

    number = 9;
    printf(((is_power_of_2(number) == 1)  ? "Да\n" : "Нет\n"));
    return 0;
}