/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 23:41:22 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/20 00:44:00 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_stpcpy(char *dst, const char *src)
{
    size_t  i;

    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char	*ft_strdup(const char *s1)
{
    char    *str;
    size_t  i;

    i = ft_strlen(s1) + 1;
    str = malloc(i);
    if (!str)
        return (NULL);
    ft_stpcpy(str, s1);
    return (str);
}
/*
#include <stdio.h>

int main ()
{
    char arr[] = "Hola Mundollr";
    printf("%s\n", arr);
    printf("%s\n", ft_strdup(arr));
    free (arr);
    return 0;
}
*/