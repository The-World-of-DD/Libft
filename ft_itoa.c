/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:30:30 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/21 22:16:58 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_num(int c)
{
	size_t	count;

	count = 0;
	if (c < 0)
		count = 1;
	while (c >= 10)
	{
		c = c/10;
		count ++;
	}
	if (c < 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ito;
	size_t	i;
	char	sign;
	
	ito = malloc(ft_count_num(n) + 1);
	if (!ito)
		return (NULL);
	if (n < 0)
	{
		sign[i] = '-';
		n *= -1;
	}
	if (n >= 10)
	{
		ito = n/10 + '0';
		ft_itoa(n/10);
	}
	if (n < 10)
	{
		ito = n + '0';
		ft_itoa(n);
	}
	if (sign > 0)
		ito[0] = '-';
	return (ito);
}

#include "stdio.h"

int	main ()
{
	int a = 23333333;
	int b = -23333333;
	printf("%s\n", ft_itoa(a));
	printf("%s\n", ft_itoa(b));

}