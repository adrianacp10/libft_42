#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char                    *new_str;
        unsigned int    i;
        unsigned int    len;

        if (!s)
        {
                return (NULL);
        }
        len = ft_strlen(s);
        new_str = (char *)malloc(sizeof(char) * (len + 1));
        if (!new_str)
                return (NULL);
        i = 0;
        while (i < len)
        {
                new_str[i] = (*f)(i, s[i]);
                i++;
        }
        new_str[i] = '\0';
        return (new_str);
}
/*
// Función de ejemplo que transforma el carácter a mayúscula si el índice es par
char to_uppercase(unsigned int index, char c)
{
    if (index % 2 == 0)  // Convierte a mayúsculas si el índice es par
        return c - 32;
    return c;
}

int main()
{
    const char *str = "hello world";
    
    // Aplicar ft_strmapi a la cadena 'str' con la función 'to_uppercase'
    char *result = ft_strmapi(str, to_uppercase);
if (result != NULL)
    {
        printf("Original: %s\n", str);
        printf("Modified: %s\n", result);
        
        // Liberar la memoria reservada para la nueva cadena
        free(result);
    }
    else
    {
        printf("Error en la asignación de memoria o función inválida.\n");
    }

    return 0;
}*/
      