

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        i++;
    }
    return(i);
}
char    *ft_strdup(char *src)
{
    int len;
    char *dup;
    int i = 0;

    len = ft_strlen(src);
    dup = (char *)malloc(sizeof(char)*len + 1);
    if(!dup)
        return(NULL);
    while(src[i] != '\0') 
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}
int main()
{
    char *p = "oustaninba";
    char *p1 = "oustaninba";
    char *a;
    char *b;
    a = ft_strdup(p);
    b = strdup(p1);
    printf("%s\n", a);
    printf("%s\n", b);
}