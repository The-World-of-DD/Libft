/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 22:11:23 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/27 13:47:08 by dierojas         ###   ########.fr       */
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

static char	*ft_fill_word(const char *s, char c)
{
	char	**str;
	int	i;
	int	word_count;
	
	str = malloc(ft_word_count(s, c) * (sizeof(char)));
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			*str[i] = s[i];
			i++;
		}
	//*str[i] = '\0';//no me queda muy claro que tenga que ir aqui.
	return (&**str);
	}
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
int	main ()
{
	char	*str = "Hola,,,Hola,Mundo,Adios,Mundo,,,,,,Adios";
	char	*str2 = ",Hola,,Adios,";
	char	c = ',';
	char	**words = ft_fill_word(str, c);
	int i = 0;
	printf("%i\n", ft_word_count(str, c));
	printf("%i\n", ft_word_count(str2, c));

	while (condition)
	{
		/* code */
	}
	

	return 0;
}

// void	ft_free(/* whatever argument you need */)
// {
//    /* free EVERYTHING you allocated */
//    /* each element of the array as well as the array */
// }
