/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:29:38 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/21 10:04:41 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	start;
	size_t	end;

	s2 = malloc(ft_strlen(set) + 1);
	if(!s2 || !s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start])
	{
		if(s1[start] == set)
		{
			s2 = set;
			set++;
			s2++;
		}
		start++;
	}
	
	s2[i] = '\0';
	return (s2);
}

#include <stdio.h>

int	main ()
{
	printf("%s\n", ft_strtrim("HolaMundo", "Mundo"));
	printf("%s\n", ft_strtrim("HolaMundo", "Hola"));	
}
