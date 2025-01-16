/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:43:09 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/16 09:15:26 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dest;
	unsigned const char	*sourc;

	dest = (unsigned char *)dest;
	sourc = (unsigned const char *)sourc;
	i = 0;
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}
	
#include "libft.h"

int	main ()
{
	char src [] = "Hola Mundo";
	size_t len = 4;
	unsigned char c = 'A';

	printf("%p\n", ft_memcpy(src, c, len));
	printf("%s\n", src);
}
