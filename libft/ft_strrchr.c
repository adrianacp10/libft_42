char *ft_strrchr(char *str, int c)
{   
    int i;
    i = 0;
    //vamos al final de la cadena
    while(str[i] != '\0')
    {
        i++;
    }
    //recorremos hacia atrás
    while(i >= 0)
    {
        if(str[i] == (char)c)
        {
            return ((char *)(str + i));
        }
        i--;
    }
    return (0);
}

#include <stdio.h>
int main()
{
    char str[] = "Hola mond";
    char c = 'o';
    char *result;

    result = ft_strrchr(str, c);
    if (result)
        printf("Resultado al buscar '%c': %s\n", c, result);
    else
        printf("Resultado al buscar '%c': (null)\n", c);

    return 0;
}

/*
Localiza la última aparición de c (convertido a unsigned char) en la cadena apuntada
por str (incluyendo el carácter nulo).
La función retorna un puntero a partir del carácter encontrado.
Si no se ha encontrado el carácter, c, entonces retorna un puntero nulo.
*/