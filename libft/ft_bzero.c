#include <stddef.h> // ? se puede utilizar para el size_t sino sustituit por unsigned int o unsigned long;
#include <stdio.h>

void    *ft_bzero(void *dest, size_t count)
{
    //dest es un puntero de valor generico, se convierte a unsigned char con un cast explicito
    unsigned char *p = (unsigned char *)dest;

    while(count > 0)
    {
        *p = 0;
        p++; //mueve el pointer al siguiente byte
        count--;
    }
    return (dest);
}

/*
esta funcion está en desuso ya que la funcion memset puede hacer lo mismo y es mas versatil 
*/
/*
int main() {
    char arr[10] = "123456789"; // Buffer inicializado con datos

    printf("Antes de ft_bzero: %s\n", arr);

    ft_bzero(arr, 5); // Poner en cero los primeros 5 bytes
    // Imprimimos el arr después de ft_bzero
    printf("Después de ft_bzero: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]); // Imprime los valores en formato numérico
    }
    printf("\n");

    return 0;
}*/