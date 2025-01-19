/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 00:39:44 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/20 00:55:49 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    char    *sbstr;

    sbstr = malloc (len);
    if (!sbstr)
        return (NULL);
    i = 0;
    while (s[i] && i < len)
    {
        j = 0;
        while((unsigned int *)s[i] == start)
        {
            if 
            j++;
        }
        i++;
    }
}
