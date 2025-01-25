/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 00:39:44 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/25 19:26:02 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sbstr;

	sbstr = malloc (len) + 1;
	if (!sbstr)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		if (i < len)
		{
			sbstr[i] = s[start];
			start++;
			i++;
		}
	}
	return (sbstr);
}
/*
#include <stdio.h>

int main ()
{
    printf ("%s\n", ft_substr("Hola Mundo", 7, 10));
    printf ("%s\n", ft_substr("Hola Mundo", 3, 5));
    printf ("%s\n", ft_substr("Hola Mundo", 10, 10));
}
*/