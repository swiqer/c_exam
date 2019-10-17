/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:09:59 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 16:22:00 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char i;
    char chek;
    
    chek = 0;
    i = 'a';
    while(i <= 'z')
        if(i % 2 == 0)
        {
            chek = i - 32;
            ft_putchar(chek);
            i++;
        }
        else
        {
            ft_putchar(i);
            i++;
        }
    write(1,"\n",1);
    return 0;
}