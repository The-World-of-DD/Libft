/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:25:55 by dierojas          #+#    #+#             */
/*   Updated: 2025/04/05 18:29:46 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (NULL);
	count = 0;
	while (lst -> next != NULL)
	{
		count++;
		lst = lst -> next; 
	}
	return (count);
}
