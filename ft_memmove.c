/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:30:53 by dd                #+#    #+#             */
/*   Updated: 2025/02/01 19:13:39 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d_cpy;
	unsigned char	*s_cpy;
	size_t			i;

	if (!dst || !src)
		return (NULL);
	d_cpy = (unsigned char *)dst;
	s_cpy = (unsigned char *)src;
	i = n;
	if (d_cpy > s_cpy)
	{
		while (i-- > 0)
			d_cpy[i] = s_cpy[i];
	}
	else
	{
		i = 0;
		while (i++ < n)
			d_cpy[i] = s_cpy[i];
	}
	return (dst);
}
/*
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
*/