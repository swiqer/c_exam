/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matff_revalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:37:04 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 17:45:44 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char i;
    char save;

    i = 'z';
    while(i >= 'a')
    {
        if(i % 2 != 0)
        {
            save = i - 32;
            ft_putchar(save);
            i--;
        }
        else 
        {
            ft_putchar(i);
            i--;
        }
    }
    write(1,"\n",1);
    return 0;
}