#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
        unsigned int    i;

        i = 0;
        if (s)
        {
                while (s[i])
                {
                        (*f)(i, s + i);
                        i++;
                }
        }
}


void to_uppercase(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')  // Si el carácter es una letra minúscula
        *c = *c - 32;  // Convertimos a mayúscula
}

int main()
{
    char str[] = "hola mundo";
    
    // Llamamos a ft_striteri para convertir a mayúscula cada carácter de la cadena
    ft_striteri(str, to_uppercase);
    
    // Imprimimos el resultado
    printf("Cadena modificada: %s\n", str);

    return 0;
}

