#include <unistd.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}

void ft_putintstr(int n)
{
   if(n > 9)
      ft_putintstr(n / 10);
   ft_putchar(n % 10 + '0');
}

int is_simple(int number)
{  
   int i;
   int value;

   value = 0;
   i = number;
   while(i >= 2)
   {
      if(number % i == 0)
         value++;
      i--;
   }
   if(value == 1)
      return 1;
   return 0;
}


int ft_atoi(char *str)
{
   int i;
   int omen;
   int result;

   omen = 1;
   i = 0;
   while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
      i++;
   if(str[i] == '-')
   {
      omen = -1;
      i++;
   }
   if(str[i] == '+')
      i++;
   result = 0;
   while(str[i] && (str[i] >= '0' && str[i] <= '9'))
   {   
      result = result * 10 + (str[i] - '0');
      i++;
   }
   return((int)omen * (int)result);
}

void add_prime_sum(char *str)
{
   int atoi;
   int result;

   atoi = ft_atoi(str);
   result = 0;
   while(atoi)  
   { 
     if(is_simple(atoi)) 
         result += atoi;
      atoi--;
   }
   ft_putintstr(result);
}

int main(int ac, char **av)
{
   if(ac == 2)
      add_prime_sum(av[1]);
   write(1, "\n", 1);
   return 0;
}