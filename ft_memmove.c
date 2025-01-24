/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:30:53 by dd                #+#    #+#             */
/*   Updated: 2025/01/24 01:13:52 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
    char	*destn;
	const char	*sourc;

	destn = (char *)dst;
	sourc = (const char *)src;
    if (destn > sourc)
	{
		i = n;
		while (i > 0)
		{
			destn[i] = sourc[i];
			i++;
		}
	}
	else 
	{
		i = 0;
		while (i < n)
		{
			destn[i] = sourc[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>

int main ()
{
	char src [] = "Hola Mundo";
	char dest [10] = "ADIOS";
	size_t len = 4;

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_memmove(dest, src, len);

	printf("%s\n", src);
	printf("%s\n", dest);
}
*/