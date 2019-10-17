/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:40:12 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 20:10:02 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_rot_13(char c)
{
    if((c >= 'a' && c <= 'm' ) || (c >= 'A' && c <= 'M'))
        c += 13;
    else if((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
        c -= 13;
    else 
        return c;
    return c;
}

int main(int ac, char **av)
{   
    int rot;
    
    if(ac == 2)
    {
        while(*av[1] != '\0')
        {
            rot = ft_rot_13(*av[1]);
            ft_putchar(rot);
            av[1]++;
        }        
    }
    write(1, "\n", 1);
    return 0;
}