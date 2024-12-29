#include <stddef.h>
#include <stdio.h>
char *ft_strchr(const char *str, int c)
{
    while(*str)
    {
        if(*str == (char)c)
        {
            return ((char *)str);
        }
        str++;
    }

    if (c == '\0') {
        return (char *)str; // Devolvemos el puntero al carácter nulo
    }
    return NULL; //o return (0);
}

int main()
{
    char str[] = "Hola busco una c";
    char c = 'c';
    char *result;
    //caso 1
    result = ft_strchr(str, c);
    printf("%s\n", result);
    //caso del null
    char c_null = '\0';
    char *result_null = ft_strchr(str, c_null);
    if (result_null)
        printf("Resultado al buscar '\\0': \"\"\n"); // El carácter nulo es invisible
    else
        printf("Resultado al buscar '\\0': (null)\n");
}

/*La función retorna un puntero a partir del carácter encontrado. 
Si no se ha encontrado el carácter, c, entonces retorna un puntero null.*/