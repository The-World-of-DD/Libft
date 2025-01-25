/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:29:38 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/26 00:56:42 by dierojas         ###   ########.fr       */
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
	end = ft_strlen(s1);

	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (ft_strlen(s1) == ft_strlen(set))
		return (NULL);

// 	while (s1[i] && s1[i] != set[ft_strlen(set - 1)])
// 	{
// 		i--;
// 		end--;
// 	}
// 	s2 = malloc((end - start + 1) * (sizeof (char)));
// 	if(!s2)
// 		return (NULL);
// 	while (s1[end - start] == s2[i])
// 	{
// 		s2[i] = s1[start - end];
// 		i++;
// 	}
// 	s2[i] = '\0';
// 	return (s2);
// }

// #include <stdio.h>

// int	main ()
// {
// 	printf("%s\n", ft_strtrim("HolaMundo", "Mundo"));
// 	printf("%s\n", ft_strtrim("HolaMundo", "Hola"));

// 	return 0;	
// }
