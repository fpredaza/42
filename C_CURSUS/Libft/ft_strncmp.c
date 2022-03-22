#include<stdio.h>
int ft_strncmp(char *s1, char *s2, int n)
{
    int i;

    i = 0;
    while(((*s1 != '\0') || (*s2 != '\0')) && (i < n))
    {
        if(*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
        i++;
    }
    return (*s1 - *s2);
}

int main ()
{
    printf("%i\n", ft_strncmp("aaa","aac", 3));
    return (0);
}