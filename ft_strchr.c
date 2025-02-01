/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:12:06 by dierojas          #+#    #+#             */
/*   Updated: 2025/02/01 16:48:34 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	s -= 1;
	while (*++s)
	{
		if (*s == (char)c)
			return ((char *)s);
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char src [] = "Hola Mundo";
	char a= 'a';
	int c = 32;

	printf("%d\n", a);
	printf("%d\n", c);
}
*/
