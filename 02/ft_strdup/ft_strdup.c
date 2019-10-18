/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:12:24 by flelah            #+#    #+#             */
/*   Updated: 2019/10/18 14:29:15 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char    *ft_strdup(char *src)
{
    char    *s;
    int     len;
    int     i;
    
    i = 0;
    len = 0;
    while(src[len] != '\0')
        len++;
    if(!(s = (char *)malloc(sizeof(char) * (len + 1))))
    
        return NULL;
    while(src[i] <= len)
    {    
        s[i] = src[i];
        i++;
    }
    s[i] = '\0';
    return s;    
}

int main(void)
{   
    char *newstr;
    char str[20] = "Kirill Kuzmin";
    newstr = ft_strdup(str);
    while(newstr[1] != '\0')
        write(1,newstr++,1);
    write(1,"\n",1);
    return 0;
}