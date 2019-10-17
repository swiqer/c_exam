/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:10:17 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 19:23:07 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char c)
{
    write(1, &c, 1);
}

int ft_ulstr(char c)
{   
    char exp;
    
    if(c >= 'a' && c <= 'z')
        exp = c - 32;
    else if(c >= 'A' && c <= 'Z')
        exp = c + 32;
    else
        exp = c;
    return exp;
}

int main(int ac, char **av)
{   
    int print;
    
    if(ac == 2)
    {
        while(*av[1] != '\0')
        {
            print = ft_ulstr(*av[1]);
            ft_putstr(print);
            av[1]++;
        }        
    }
    write(1,"\n",1);
    return 0;
}