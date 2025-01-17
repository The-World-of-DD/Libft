/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dd <dd@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:43:09 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/16 20:30:23 by dd               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*destn;
	unsigned const char	*sourc;

	destn = (unsigned char *)dst;
	sourc = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		destn[i] = sourc[i];
		i++;
	}
	return (dst);
}
/*	
#include <stdio.h>

int	main ()
{
	char src [] = "Hola Mundo";
	char dest [10] = "ADIOS";	
	size_t len = 4;
	unsigned char c = 'A';

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_memcpy(dest, src, len);
	dest[len] = '\0';

	printf("%s\n", src);
	printf("%s\n", dest);
	return 0;
}
*/