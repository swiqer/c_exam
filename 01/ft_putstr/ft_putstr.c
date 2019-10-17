/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 20:37:02 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 20:48:31 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str != '\0')
        write(1, str++, 1);
}

int main(void)
{
    char str[10] = "Kirill";
    ft_putstr(str);
    write(1,"\n",1);
    return 0;
}