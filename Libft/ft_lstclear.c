/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:33:14 by dierojas          #+#    #+#             */
/*   Updated: 2025/04/05 19:41:34 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!*lst || !del)
		return ;
	aux = *lst;
	(del)(aux -> content);
	free(lst)
	while (aux -> next != NULL)
	{
		aux -> next = aux;
		(del)(aux -> content);
		free()
	}
	
	*lst = NULL;
}
