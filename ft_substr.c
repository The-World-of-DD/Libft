/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 00:39:44 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/31 13:06:15 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	substr = malloc (len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
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
