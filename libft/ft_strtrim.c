#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
        size_t  i;
        size_t  j;
        char    *str;

        str = 0;
        if (s1 != 0 && set != 0)
        {
                i = 0;
                j = ft_strlen(s1);
                while (s1[i] && ft_strchr(set, s1[i]))
                        i++;
                while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
                        j--;
                str = (char *)malloc(sizeof(char) * (j - i + 1));
                if (str)
                        ft_strlcpy(str, &s1[i], j - i + 1);
        }
        return (str);
}
/*
int main()
{
    const char *s1 = "  ***Hello, World!***  ";
    const char *set = " *";
    
    char *trimmed = ft_strtrim(s1, set);
    
    if (trimmed)
    {
        printf("Original: '%s'\n", s1);
        printf("Trimmed:  '%s'\n", trimmed);
        free(trimmed);  // No olvides liberar la memoria.
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
    }

    return 0;
}

Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc
*/