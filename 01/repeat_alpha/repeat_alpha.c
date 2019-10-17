/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:18:54 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 18:43:49 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int letter_count(char c)
{
    int repeat;
    
    if(c >= 'A' && c <= 'Z')
        repeat = c - 'A' + 1;
    else if(c >= 'a' && c <= 'z')
        repeat = c - 'a' + 1;
    else 
        repeat = 1;
    return repeat;
}

int main(int ac, char **av)
{   
    int repeat;

    repeat = 0;
    if(ac == 2)
    {
        while(*av[1] != '\0')
        {
            repeat = letter_count(*av[1]);
            while(repeat--)
                write(1,av[1],1);
            av[1]++;
        }
    }
    write(1,"\n",1);
    return 0;
}