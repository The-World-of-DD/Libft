/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:29:38 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/26 14:14:08 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!set || !s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (ft_strlen(s1) == ft_strlen(set))
		return (NULL);
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	s2 = malloc((len + 1) * (sizeof (char)));
	if (!s2)
		return (NULL);
//--------------------------------------------------------------------------------------------//
	while (s1[len] && s1[len] != s1[end])//le tengo que marcar la parte final del coso
	{
		s2[start] = s1[len];
		len++;
	}
	s2[len] = '\0';
	return (s2);
}

#include <stdio.h>

int	main ()
{
	printf("%s\n", ft_strtrim("HolaMundo", "undo"));
	printf("%s\n", ft_strtrim("HolaMundo", "Hola"));

	return 0;	
}
