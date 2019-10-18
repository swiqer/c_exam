/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:46:35 by flelah            #+#    #+#             */
/*   Updated: 2019/10/18 11:57:46 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int len;
    
    len = 0;
    if(ac == 2)
    {
        while(av[1][len] != '\0')
            len++;
        while(len--)
            write(1,&av[1][len], 1);       
    }
    write(1,"\n",1);
    return 0;
}