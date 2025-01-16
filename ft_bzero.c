/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 08:23:13 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/16 08:42:17 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ch ;

	if (n == 0)
		return ;
	i = 0;
	ch = (unsigned char *)s;
	while (i < n)
	{
		ch[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main ()
{
	char src [] = "Hola Mundo";
	size_t n = 5;
	
	printf("%s\n", src);
	ft_bzero(src, n);
	printf("%s\n", src);
}
*/
