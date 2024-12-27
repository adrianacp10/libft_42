#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t count)
{
    //declaramos las variables
    unsigned char *cdest;
    const unsigned char *csrc;
    size_t i;

    if(!dest || !src)
    {
        return(0);
    }
    //casting de generico a unsigned char de dest y src
    cdest = (unsigned char *)dest;
    csrc = (const unsigned char *)src;
    
   if(cdest > csrc && cdest < csrc + count)
   {
    i = count; //comienzo desde atrás
        while(i > 0)
        {
            i--;
            cdest[i] = csrc[i];
        }
   }
   else
   {
    i = 0; //comienzo desde adelante
    while(i < count)
    {
        cdest[i] = csrc[i];
        i++;
    }
   }
   return(dest);
}

int main()
{
    char strdest[10];
    char src[] = "Monito";
    ft_memmove(strdest, src, 7);
    printf("%s\n", strdest);

    char soladelante[] = "ABCDEFGHIJ";
    ft_memmove(soladelante + 3, soladelante, 5); // Copia "ABCDE" dentro del mismo array
    printf("%s\n", soladelante);

    char solatras[] = "ABCDEFGHIJ";
    ft_memmove(solatras, solatras + 3, 5); // Copia "DEFGH" dentro del mismo array
    printf("%s\n", solatras);
}