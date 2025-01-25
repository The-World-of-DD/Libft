/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:47:01 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/25 16:15:01 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, 11, "-2147483648)");
	if (n < 0)
	{
		n *= -1;
		ft_putchar (fd, '-');
	}
	if (n >= 10)
	{
		ft_putnbr_fd (fd, (n / 10));
		ft_putchar_fd (fd, ((n % 10) + '0'));
	}
	if (n < 10)
		ft_putchar_fd(fd, (n + '0'));
}
