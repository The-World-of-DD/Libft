/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dierojas < dierojas@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:29:35 by dierojas          #+#    #+#             */
/*   Updated: 2025/01/24 16:43:21 by dierojas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_word_counter(const char *s, const char c)
{
	int  i;
	int  word_count;
	int	act;
 
	if (!s)
		return (0);
	i = 0;
	word_count = 0;
	act = 0;
	while (s[i])
	{
		if (s[i] != c && act == 0)
		{
			word_count++;
			act = 1;
		}
		else if (s[i] == c)
			act = 0;
		i++;
	}
	return (word_count);
}

static char *fill_word(const char *s, int start, int end)
{
   char  *word;
   int   len;
   int   i;
   
   len = end - start;
   word = (char *)malloc((len + 1) * sizeof(char));
   if (!word)
	  return (NULL);
   i = 0;
   while (word[i])
   {
	  word[i] = word[start];
	  i++;
   }
   word[i] = '\0';
   return (word);
}


static void ft_free(char **str)
{
   size_t   i;

   if (!str)
	  return ;
   i = 0;
   while (str[i])
   {
	  free(str[i]);
	  str[i] = NULL;
   }
   free(str);
   str = NULL;
}

char **ft_split(char const *s, char c)
{
	char **words;
	int i;
	int start;
	int word_index;

	if (!s)
		return (NULL);
	words = (char **)malloc((ft_word_counter(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	word_index = 0;
	while (s[i])
	{
		while (s[i] == c) // Saltar delimitadores.
			i++;
		if (s[i]) // Detectar inicio de una palabra.
		{
			start = i;
			while (s[i] && s[i] != c) // Encontrar el fin de la palabra.
				i++;
			words[word_index++] = fill_word(s, start, i); // Copiar palabra.
			if (!words[word_index - 1]) // Si hay fallo, liberar todo.
			{
				ft_free(words);
				return (NULL);
			}
		}
	}
	words[word_index] = NULL; // Terminar el arreglo con NULL.
	return (words);
}

#include <stdio.h>


// Declaración de ft_split y ft_free.
char **ft_split(const char *s, char c);
static void ft_free(char **str);

int main()
{
	char **result;

	// Caso 1
	result = ft_split(NULL, ',');
	printf("Caso 1:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("Word %d: %s\n", i, result[i]);
	}
	ft_free(result); // Liberar memoria.

	// Caso 2
	result = ft_split(",,Hola,Mundo,Adios,hey", ',');
	printf("\nCaso 2:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("Word %d: %s\n", i, result[i]);
	}
	ft_free(result); // Liberar memoria.

	// Caso 3
	result = ft_split(",,Hola,Mundo,Adios,", ',');
	printf("\nCaso 3:\n");
	for (int i = 0; result[i] != NULL; i++) {
		printf("Word %d: %s\n", i, result[i]);
	}
	ft_free(result); // Liberar memoria.

	return 0;
}
