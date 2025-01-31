/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 21:47:01 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/31 13:32:57 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 12);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd(fd, '-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd (fd, (n / 10));
	ft_putchar_fd(fd, (n % 10) + '0');
}
/*
int main()
{
	ft_putnbr_fd(12345, 1);
	ft_putchar_fd(1, '\n');
	// ft_putnbr_fd(-6789, 1);
	// ft_putchar_fd(1, '\n');
	// ft_putnbr_fd(0, 1);
	// ft_putchar_fd(1, '\n');
	// ft_putnbr_fd(-2147483648, 1);
	// ft_putchar_fd(1, '\n');

	return 0;
}
*/
