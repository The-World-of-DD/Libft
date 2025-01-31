/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:26:15 by dd                #+#    #+#             */
/*   Updated: 2025/01/31 12:52:49 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned int)s1[i] - (unsigned int)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned int)s1[i] - (unsigned int)s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    printf("%d\n", ft_strncmp("Abls", "l", 4));
    printf("%d\n", ft_strncmp("Abls", "s", 3));
    printf("%d\n", ft_strncmp("Abls", "O", 3));
     printf("%d\n", strncmp("Abhhhls", "l", 4));
    printf("%d\n", strncmp("Abljbjbjs", "s", 3));
    printf("%d\n", strncmp("Abls", "O", 3));
}
*/
