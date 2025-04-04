/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:49:42 by dierojas          #+#    #+#             */
/*   Updated: 2025/04/04 19:52:15 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nnode;//creamos un nodo nuevo que lleva el *content y *next

	nnode = malloc(sizeof (t_list));
	if (!nnode)
		return (NULL);
	nnode -> content = content;//accedemos como nodo a content y le damos el valor content.
	nnode -> next = NULL;//lo mismo con direccion y le damos null:
	return (nnode);
}
//al ser un t_list el nodo tiene es su nuevo tipo de dato propio
//con el -> accedemos al puntero de ese tipo de dato