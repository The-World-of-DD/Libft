/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 20:28:16 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/19 23:41:00 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void    *mem;

    mem = malloc(count * size);
    if (!mem)
        return (NULL);
    ft_bzero(mem, count * size);
    return (mem);
}
/*
#include <stdio.h>

int main ()
{
    void *cosa = ft_calloc(3,2);
    if (cosa == NULL)
        printf ("Hola");
    else
        printf("adios");
    free (cosa);
    return 0;
}
*/