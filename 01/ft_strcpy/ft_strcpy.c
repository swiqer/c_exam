/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flelah <flelah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:50:41 by flelah            #+#    #+#             */
/*   Updated: 2019/10/17 18:04:33 by flelah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}

int main(void)
{
    char str1[10] = "lliriK";
    char str2[10] = "Kirill";
    printf("str1 before: %s\n", str1);
    ft_strcpy(str1, str2);
    printf("str1 after: %s\n", str1);
    return 0;   
}