#include <stddef.h> // ? se puede utilizar para el size_t sino sustituit por unsigned int o unsigned long;
#include <stdio.h>

void    *ft_memset(void *dest, int value, size_t count)
{
    //dest es un puntero de valor generico, se convierte a unsigned char con un cast explicito
    unsigned char *p = (unsigned char *)dest; 

    while(count > 0)
    {
        *p = (unsigned char)value; //cast para asegurarse de que el valor que pasas tb sea de 1byte
        p++; //mueve el pointer al siguiente byte
        count--;
    }
    return (dest);

}
/*
int main()
{
    char arr[6] = {0};  // arreglo con ceros

    ft_memset(arr, 5, 5);  // Llenar los primeros 5 caracteres con el valor 5

    // Imprimimos el arreglo después de la llamada a ft_memset
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}*/