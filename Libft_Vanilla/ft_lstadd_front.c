/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:11:17 by dierojas          #+#    #+#             */
/*   Updated: 2025/04/05 12:10:41 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(!new)//tenemos que comprobar si es el ultimo o no existe en ese caso es NULL
		return (NULL);
	new -> next = *lst;//no entiendo lo que decimos aqui
	*lst = new;// ni aqui
}
