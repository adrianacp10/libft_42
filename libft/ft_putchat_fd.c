#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}
/*
Esta función permite escribir un carácter en una ubicación específica,
ya sea en la salida estándar, un archivo u otro flujo de salida.
*/