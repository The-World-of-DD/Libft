/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:35:03 by dierojas          #+#    #+#             */
/*   Updated: 2025/02/01 16:12:14 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	if (dstsize <= d_len)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && (i + d_len < dstsize - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
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
