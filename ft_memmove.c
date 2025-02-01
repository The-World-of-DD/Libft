/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:30:53 by dd                #+#    #+#             */
/*   Updated: 2025/02/01 18:43:00 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d_cpy;
	size_t				i;

	d_cpy = (unsigned char *)dst;
	if ( !d_cpy || !src || dst == src || !n)
		return (NULL);
	if (d_cpy < (const unsigned char *)src)
	{
		while (*src)
			*d_cpy++ = (const unsigned char *)src++;
	}
	else
	{
		*d_cpy += n;
		(const unsigned char *)src += n;
		while (n--)
			*--d_cpy = *--src;
	}
	return (dst);
}

#include <stdio.h>

int main ()
{
	char src [] = "ADIOS";
	char dest [] = "Hola Mundo";
	size_t len = 3;

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_memmove(dest, src, len);

	printf("%s\n", src);
	printf("%s\n", dest);
}
