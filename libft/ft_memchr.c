#include <stddef.h>
void *ft_memchr(const void *s, int value_search, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s; //para trabajar byte por byte

    size_t i;
    i = 0;
    while(i < n) //solo hay que recorrer los índices de 0 a n - 1
    {
        if(ptr[i] == (unsigned char)value_search)
        {
            return ((void *)(ptr + i)); //aqui convertimos un unsigned char * en un puntero de tipo void *
        }
        i++;
    }
    return (0); //si no encuentra el valor
}


#include <stdio.h>

int main()
{
    char data[] = "Hola mundo";
    char c = 'm';
    size_t n = 10;

    char *result = (char *)ft_memchr(data, c, n);
    if (result)
        printf("Encontrado '%c' en: %s\n", c, result);
    else
        printf("'%c' no encontrado en los primeros %zu bytes.\n", c, n);

    return 0;
}
/*
La función retorna un puntero al carácter localizado,
o un puntero nulo si el carácter no apareció en el objeto.

Busca la primera aparición de un byte específico dentro de 
un bloque de memoria (sin necesidad de que termine en '\0').
Uso típico: Se usa para bloques de memoria genéricos que pueden
contener cualquier tipo de datos (no necesariamente cadenas de texto).

const void *s: Es un puntero al bloque de memoria donde buscamos.
int c/value_search: Es el valor (byte) que queremos encontrar, convertido internamente a un unsigned char.
size_t n: Es el número de bytes en el bloque de memoria que vamos a examinar.
*/