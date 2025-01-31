/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dd <dd@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 02:15:59 by dd                #+#    #+#             */
/*   Updated: 2025/01/18 02:42:20 by dd               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!s || !c)
		return (NULL);
	i = ft_strlen(s) - 1;
	while (s[i] >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
    char ss[] = "Hola Mundollllll";
    int s = 111;
    int s1 = 115;

    printf("%s\n", ft_strrchr(ss, s));
    printf("%s\n", strrchr(ss, s));

    return 0;
}
*/
