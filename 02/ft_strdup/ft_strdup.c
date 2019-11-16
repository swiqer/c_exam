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

char	*ft_strdup(char *src)
{
	int len;
	char *dest;
	int i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *)malloc(sizeof(*dest) * (len + 1));
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
    dest[i] = '\0';
	return (dest);
}

int main(void) {
  printf("%s", ft_strdup("Kirill Kuzmin"));
  return 0;
}