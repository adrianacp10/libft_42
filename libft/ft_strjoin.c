#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *new;
        int             i;
        int             j;

        j = 0;
        i = 0;
        if (!s1 || !s2)
                return (NULL);
        new = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
        if (!new)
                return (NULL);
        while (s1[i])
        {
                new[i] = s1[i];
                i++;
        }
        while (s2[j])
        {
                new[i] = s2[j];
                i++;
                j++;
        }
        new[i] = '\0';
        return (new);
}
/*
concatena s1 + s2 en una cadena nueva y devuelve el resultado
siempre se copia primero s1 y despues s2, terminado en char null

int main()
{
    const char *str1 = "Hello, ";
    const char *str2 = "World!";
    
    char *result = ft_strjoin(str1, str2);
    
    if (result)
    {
        printf("String concatenada: %s\n", result);
        free(result);  // No olvides liberar la memoria.
    }
    else
    {
        printf("Error en la asignación de memoria.\n");
    }

    return 0;
}*/