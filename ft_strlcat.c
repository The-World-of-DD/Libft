/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:35:03 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/21 22:06:13 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	
	j = ft_strlen(dst);
	if (dstsize == 0)
		return (dstsize);
	if (dstsize <= j)
		return (j + ft_strlen(src));
	i = 0;
	while (src[i] && (i + j < dstsize - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
/*
#include <stdio.h>

int	main()
{

	char src [] = "Hola Mundo";
	char dest [] = "ADIOS";
	size_t len = 10;

	printf("%s\n", src);
	printf("%s\n", dest);

	printf("%zu\n", ft_strlcat(dest, src, len));

	printf("%s\n", src);
	printf("%s\n", dest);
}
*/
