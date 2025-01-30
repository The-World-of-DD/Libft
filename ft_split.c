/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas <dierojas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 22:11:23 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/29 21:04:09 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	word_count;
	int	i;
	
	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			word_count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (word_count);
}

char	*ft_strncpy(char *dst, const char* src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}


char	**ft_split(const char *s, char c)
{
	char	**str;
	int	i;
	int	j;
	int	start;
	
	str = malloc(ft_word_count(s, c) * (sizeof(char)));//simplemente alocamos la memoria de cada una de los lugares de las palabras
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)//saltamos los delimitadores
			i++;
		if (s[i] != '\0')//si es distinto al final -> Encontramos una palabra nueva porque no es delimitador
		{	
			start = i;
			while (s[i] != c && s[i] != '\0')//sigue avanzando
				i++;
			
			str[j] = malloc((i - start) * sizeof(char));
			if(!str[j])//cuando el segundo malloc fallla liberamos las previas
			{
				while (j > 0)
					free (str[--j]);//predecremento, mejor para la liberacion de mem.
				free(str);
				return (NULL);
			}
			ft_strncpy(str[i][i - start], &s[start], i - start);
			str[i][i - start];
			j++;
		}
	}
	str[j] = '\0';//no me queda muy claro que tenga que ir aqui.
	return (str);
}

// char	**ft_split(const char *s, char c)
// {
// 	int	words;
// 	char	**split;
	
// 	words = ft_word_count(s, c);
// 	split = malloc(words);
//    /* allocate an array big enough to hold all the words in s */
//    /* loop over the string and find the start of the word */
//       /* find the end of the word */
//          /* copy the world at the first free index in our words array */
//    /* return our words array */
// }
#include <stdio.h>

int	main(void)
{
	char	*str = "Hola,,,Hola,Mundo,Adios,Mundo,,,,,,Adios";
	char	*str2 = ",Hola,,Adios,";
	char	c = ',';

	char **words = ft_fill_word(str, c);
	if (words)
	{
		int i = 0;
		while (words[i])
		{
			printf("Word %d: %s\n", i, words[i]);
			free(words[i]); // Free each word
			i++;
		}
		free(words); // Free the main array
	}

	return 0;
}

// void	ft_free(/* whatever argument you need */)
// {
//    /* free EVERYTHING you allocated */
//    /* each element of the array as well as the array */
// }
