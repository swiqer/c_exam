/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:28:52 by flelah            #+#    #+#             */
/*   Updated: 2019/10/18 11:41:48 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int value1 = 20;
    int value2 = 30;
   
    printf("%i %i\n", value1, value2);
    ft_swap(&value1, &value2);
    printf("%i %i\n", value1, value2);
    return 0;
}