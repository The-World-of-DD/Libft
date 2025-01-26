/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:47:01 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/26 21:54:55 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 12);
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd(fd, '-');
	}
	if (n >= 10)
	{
		ft_putnbr_fd (fd, (n / 10));
		ft_putchar_fd (fd, ((n % 10) + '0'));
	}
	if (n < 10)
		ft_putchar_fd(fd, (n + '0'));
}
