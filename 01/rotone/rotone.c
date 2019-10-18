/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:01:42 by flelah            #+#    #+#             */
/*   Updated: 2019/10/18 12:10:17 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_rotone(char c)
{
    if((c >= 'a' && c <= 'y') || (c >= 'A' && c<= 'Y'))
        c = c + 1;
    else if((c == 'z') || (c == 'Z'))
        c = c - 25;
    else 
        return c;
    return c;
}

int main(int ac, char **av)
{   
    int save;
    
    if(ac == 2)
    {
        while(*av[1] != '\0')
        {
            save = ft_rotone(*av[1]);
            ft_putchar(save);
            av[1]++;
            save = 0;
        }
    }
    write(1,"\n",1);
    return 0;
}