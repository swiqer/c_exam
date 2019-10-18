/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:40:29 by flelah            #+#    #+#             */
/*   Updated: 2019/10/18 14:08:47 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
    int sign;
    long r;

    r = 0;
    sign = 1;
    while(*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if(*str == '-')
    {
        sign = -1;
        str++;
    }
    if(*str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        r = r * 10 + *str - '0';
        str++;
    }
    return (sign * (int)r);
}

int main(void)
{
    char a[] = "    \n\n\v\f\r\t -5234AAAgreghrsth";// -5234
	printf("%d\n",ft_atoi(a));
}