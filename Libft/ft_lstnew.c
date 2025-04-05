/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:10:43 by dierojas          #+#    #+#             */
/*   Updated: 2025/04/05 18:12:51 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list  *nnode;

    nnode = malloc(sizeof(t_list));
    if (!nnode)
        return (NULL);
    nnode -> content = content;
    nnode -> next = NULL;
    return (nnode);
}
