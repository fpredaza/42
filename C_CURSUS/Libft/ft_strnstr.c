#include<stdio.h>

char	*ft_strnstr(char *str, char *to_find, int len)
{
  int i;
  int j;

  i  = 0;
  if (to_find[0] == '\0')
		return (str);
  while(*str != '\0' && i < len )
  {
    j = 0;
    while(str[i + j] == to_find[j] && str[i + j != '\0'])
    {
      if(to_find[j + 1] == '\0')
        return(&str[i]);
      j++;
    }
    i++;
  }
  return (NULL);
}
int main ()
{
  char str[]= "HOLACARACOLA";
  char to_find[]= "CARACOLA";
  printf("%s\n", ft_strnstr(str, to_find, 6));

  return(0);
}