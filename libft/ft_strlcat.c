#include <stddef.h>
#include <stdio.h>

size_t ft_strlcat(char *dest, const char *src, size_t size) //el size es el buffer, ya incluye el espacio para el carácter nulo
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    dest_len = 0;
    src_len = 0;
    i = 0;

    //longitud de dest
    while(dest[dest_len] != '\0' && dest_len < size) //para asegurarse de que no lea más alla del buffer
    {
        dest_len++;
    }

    //longitud de src
    while(src[src_len] != '\0')
    {
        src_len++;
    }

    // Si el tamaño del buffer es menor o igual a la longitud de dest, no se puede concatenar
    if (size <= dest_len)
    {
    return (src_len + dest_len); // Devuelve longitud combinada
    }

    // Copiar src al final de dest mientras haya espacio
    while (dest_len + i < size - 1 && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    
    // Asegura que el carácter nulo se copie al final de dest
    if (dest_len + i < size) {
        dest[dest_len + i] = '\0';
    }

    return (dest_len + src_len);
}

int main()
{
    char dest[20] = "Monito"; // 6
    char src[] = "guapo"; // 5 6+5 = 11
    size_t buffer = 12; //siempre incluye espacio para el caracter nulo
    size_t result_dest;

    result_dest = ft_strlcat(dest, src, buffer);
    printf("%s\n", dest);  // Resultado esperado: "Monitoguapo"
    printf("Longitud total esperada:%zu\n", result_dest);  // Longitud total esperada: 11 porque no include el null caracter
    
    return 0;
}
/*Tamaño del buffer (size): Es el tamaño máximo del espacio de memoria disponible para
almacenar los caracteres en dest, incluyendo el espacio para el carácter nulo.
*/
//tamaño en bytes
//longitud cantidad de caracteres
/*
EXISTEN DOS CASOS:
retorno < size:
No hubo truncamiento. La concatenación se completó exitosamente, y toda la cadena src se copió a dest.

retorno >= size:
Sí hubo truncamiento. Esto incluye el caso en el que retorno == size.
*/