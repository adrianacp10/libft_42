//comprueba si es un valor alpha-numerico
int ft_isalnum(char c)
{
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return(1);
    }
    else if (c >= 48 && c <= 57)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}