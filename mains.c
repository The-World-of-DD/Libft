#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

static char	**ft_fill_word(const char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		start;
	
	str = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{	
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			
			str[j] = malloc((i - start + 1) * sizeof(char));
			if (!str[j])
			{
				while (j > 0)
					free(str[--j]);
				free(str);
				return (NULL);
			}
			strncpy(str[j], &s[start], i - start);
			str[j][i - start] = '\0'; // Null terminate the string
			j++;
		}
	}
	str[j] = NULL; // Properly terminate the array
	return (str);
}

// Function to free allocated memory
void	ft_free(char **str)
{
	int	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

// Test Function
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
			i++;
		}
		ft_free(words); // Free allocated memory
	}

	return 0;
}
