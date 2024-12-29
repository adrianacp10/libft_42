#include <stddef.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
    char s1[] = "Hola";
    char s2[] = "Hola Mundo";
    size_t n = 7;

    int result = ft_strncmp(s1, s2, n);
    printf("Resultado: %d\n", result); 

    return 0;
}
/*
se comparan uno a uno los caracteres en la misma posición de ambas cadenas,
empezando por la izquierda hasta que uno de ellos no coincida, se hayan realizado n comparaciones 
o se haya llegado al final de una cadena.
Devueleve < 0 si str1 es menor que str2; > 0 si str1 es mayor que str2 y 0 si son iguales.
*/