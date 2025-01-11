#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
        size_t  tot_size;
        void    *dst;

        tot_size = size * count;
        dst = malloc(tot_size);
        if (!dst)
                return (NULL);
        ft_memset(dst, 0, tot_size);
        return (dst);
}
/*
void    *ft_calloc(size_t nitems, size_t size)
{
        size_t  total_size;
        void    *dest;

        total_size = size * nitems;
        dest = malloc(total_size);
        if (!dest)
        {
                return (NULL);
        }
        ft_memset(dest, 0, total_size);
        return (dest);
}
nitem representa el numero de elementos a ser alocados
size representa el tamano de cada elemento
devuelve el pointer a la memoria alojada
con todos los bytes inicializamos en cero.


int main() {
    size_t count = 5;  // Número de elementos que queremos asignar
    size_t size = sizeof(int);  // Tamaño de cada elemento (en este caso, un int)

    // Llamamos a ft_calloc para asignar memoria para 'count' elementos de tipo 'int'
    int *arr = ft_calloc(count, size);

    // Verificamos si la memoria fue asignada correctamente
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;  // Salir si no se pudo asignar memoria
    }

    // Mostramos los valores de la memoria recién asignada utilizando un while
    printf("Valores iniciales en la memoria:\n");
    size_t i = 0;
    while (i < count) {
        printf("arr[%zu] = %d\n", i, arr[i]);  // Debería mostrar 0 en todos los casos
        i++;  // Incrementamos el índice
    }

    // Liberamos la memoria asignada
    free(arr);

    return 0;
}*/