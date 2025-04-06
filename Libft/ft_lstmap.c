/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:01:04 by dierojas          #+#    #+#             */
/*   Updated: 2025/04/06 19:58:45 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nnode;

	nlst = NULL;
	nnode = NULL;
	while (lst)
	{
		nnode = malloc(sizeof(t_list));
		if (!nnode)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
	}
	nnode -> content = f(lst -> content);
	nnode -> next = NULL;
	if (!nlst)
		nlst = nnode;
	else
	{
		
	}
	
	
}
