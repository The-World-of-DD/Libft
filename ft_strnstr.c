/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 01:45:12 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/19 15:53:09 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (needle[i] == '\0')
        return ((char *)haystack);
    while (i < len && haystack[i])
    {
        j = 0;
        while (haystack[i] == needle[j])
        {
            if (haystack[j + i] == needle[i])
                return ((char *)needle);
            j++;
        }
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
    printf("%s\n", strnstr("Alp Bett Omeg", "Omeg", 16));
    printf("%s\n", strnstr("Alp Bett Omeg", "Omeg", 7));
    printf("%s\n", ft_strnstr("Alp Bett Omeg", "Omeg", 16));
    printf("%s\n", ft_strnstr("Alp Bett Omeg", "Omeg", 7));

}
*/