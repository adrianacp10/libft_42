#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t count)
{
    size_t i;
    unsigned char *cdest;
    const unsigned char *csrc;

    if(!dest || !src)
    {
        return (0);
    }
    i = 0;
    cdest = (unsigned char *) dest;
    csrc = (const unsigned char *) src;
    while(i < count)
    {
        cdest[i] = csrc[i];
        i++;
    } // retorna el mismo puntero que se pasa como destino 
    return (dest); // cdest es solo un puntero auxiliar para realizar la manipulación interna y la conversion
}

#include <stdio.h>
int main()
{
    char dest[10];
    char str[] = "Bon dia";
    size_t count;
    count = 8;
    ft_memcpy(dest, str, count);
    printf("esta es la copia en dest:%s", dest);
}