#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char    *ft_strrev(char *str)
{
   int i = 0;
   int j;
   char tmp;

    j = ft_strlen(str) - 1;
    while(i < j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j--;
        i++;
    }
    return(str);
}

int main()
{
    char a[] = "oustani anas never broke again";
    printf("%s", ft_strrev(a));
}