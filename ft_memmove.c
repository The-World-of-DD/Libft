/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dd <dd@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:30:53 by dd                #+#    #+#             */
/*   Updated: 2025/01/17 08:06:10 by dd               ###   ########.fr       */
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
        //??????????
    i = 0;
	while (destn[i] && (i < n))
	{
		destn[i] = sourc[i];
		i++;
	}
	return (dst);
}

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