#include "libft.h"

#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);


void	ft_bzero(void *s, size_t n);//y tu también...
void    *ft_memcpy(void *dest, const void *src, size_t n); // hacerr test, pero esta ok
void    *ft_memmove(void *dest, const void *src, size_t n); // Hacemos pruebas y repetimoos-
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c); // listo, pero tengo que hacer mis pruebas
char	*ft_strrchr(const char *s, int c); // listo, pero tengo que hacer mis pruebas
int	ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);//menuda humillacion, que vergüenza
int	ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);//tenemos que modificarla por el numero de lineas  D:
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);//no se si el salto de linea tiene que estar alli
void ft_putnbr_fd(int n, int fd);

char src [] = "Hola Mundo";
size_t len = 4;
unsigned char c = 'A';

int	main ()
{
	//printf("%d\n",(ft_isalpha(c)));
	//printf("%d\n",(ft_isalnum(c)));

	
}
#include <stdlib.h>
#include <stdio.h>

// Cuenta el número de palabras separadas por 'c'.
static int ft_word_counter(const char *s, const char c)
{
    int i;
    int word_count;
    int act;

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

// Crea y llena una palabra desde start hasta end en s.
static char *fill_word(const char *s, int start, int end)
{
    char *word;
    int len;
    int i;

    len = end - start;
    word = (char *)malloc((len + 1) * sizeof(char));
    if (!word)
        return (NULL);
    i = 0;
    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';
    return (word);
}

// Libera un array de palabras.
static void ft_free(char **str)
{
    size_t i;

    if (!str)
        return;
    i = 0;
    while (str[i])
    {
        free(str[i]);
        str[i] = NULL;
    }
    free(str);
    str = NULL;
}

// Divide la cadena s en palabras separadas por el delimitador c.
char **ft_split(const char *s, char c)
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
            while (s[i] && s[i] != c) // Encontrar fin de la palabra.
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

int main()
{
    char **result;

    // Caso 1
    result = ft_split(",Hola,Mundo,Adios,,hola,,", ',');
    printf("Caso 1:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i, result[i]);
    }
    ft_free(result);

    // Caso 2
    result = ft_split(",,Hola,Mundo,Adios,hey", ',');
    printf("\nCaso 2:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i, result[i]);
    }
    ft_free(result);

    // Caso 3
    result = ft_split(",,Hola,Mundo,Adios,", ',');
    printf("\nCaso 3:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("Word %d: %s\n", i, result[i]);
    }
    ft_free(result);

    return (0);
}
