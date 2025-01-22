/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:30:30 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/22 11:32:14 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_num(int c)
{
	size_t	count;

	count = 0;
	if (c == -2147483648)
		return (12);
	if (c < 0)
	{
		c *= -1;
		count = 1;
	}
	while (c > 0)
	{
		c /= 10;
		count++;
	}
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
	i = 0;
	if (n < 0)
	{
		ito[0]= '-';
		n *= -1;
		i = 1;
	}
	while (n >= 10)
	{
		n /= 10;
		ito[i] = (n % 10) + '0';
		i++;
	}
	if (n < 10)
		ito[i] = (n % 10) + '0';
	ito[i] = '\0';
	return (ito);
}

#include "stdio.h"

int	main ()
{
	int a = 21111112;
	int b = -21111112;
	printf("%s\n", ft_itoa(a));
	printf("%s\n", ft_itoa(b));

}
