/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:04:39 by dierojas          #+#    #+#             */
/*   Updated: 2025/02/03 21:06:08 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_test_mem_free(char **str, int j)
{
	if (!str[j])
	{
		while (j > 0)
			free (str[--j]);
		free(str);
	}
}