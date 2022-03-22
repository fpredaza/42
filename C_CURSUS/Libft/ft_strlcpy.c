#include<stdio.h>
int ft_strlen (char *str)
{
    int i;

    i = 0;
    while(*str++)
        i++;
    return(i);
}

int ft_strlcpy(char *dest, char *src, int size)
{
    int i;
    int lsrc;

    lsrc = ft_strlen(src);
    i = 0;
    while (*src != '\0' && i < size -1)
    {
        *dest++ = *src++;
        i++;
    }
    *dest = '\0';
    return  (lsrc);
}

int main ()
{
    char src[]= "HOLA";
    char dest[]= "caracola";
    ft_strlcpy(dest, src, 4);
    printf("%s\n", dest );
    return(0);
}