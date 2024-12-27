#include <stddef.h>
size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    int i;
    size_t srclen;
    srclen = 0;

    while (src[srclen] != '\0')
    {
        srclen++;
    }

    if (size > 0)
    {
        i = 0;
        while(i < size - 1 && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (srclen);
}

#include <stdio.h>

int main()
{
    char strdest[10];
    char stror[] = "Monito";
    size_t result;

    result = ft_strlcpy(strdest, stror, 7);
    printf("%s\n", strdest);
    printf("%zu\n", result);

}