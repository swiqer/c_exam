/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:00:54 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 16:05:15 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char i;

    i = '0';
    while(i <= '9')
    {
        ft_putchar(i);
        i++;
    }
    write(1,"\n",1);
}

int main(void)
{
    ft_print_numbers();
    return 0;
}