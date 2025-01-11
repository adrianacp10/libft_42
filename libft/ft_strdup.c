#include <stdlib.h>
#include "libft.h"

char    *ft_strdup(char *src)
{
        char    *dup;
        size_t  len;
        size_t  i;

        len = 0;
        while (src[len] != '\0')
                len++;
        dup = (char *) malloc((len + 1) * sizeof(char));
        if (!dup)
        {
                return (NULL);
        }
        i = 0;
        while (i < len)
        {
                dup[i] = src[i];
                i++;
        }
        dup[i] = '\0';
        return (dup);
}
/*
#include <stdio.h>
int main()
{
    char original[] = "Bye";
    char *result;

    printf("original: %s\n", original);
    result = ft_strdup(original);
    printf("resultado ft: %s", result);

    free(result);
    return(0);
 }*/
