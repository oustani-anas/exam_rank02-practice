
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int     i;
    int     j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}
int main()
{
    char a[] = "oustcni";
    char b[] = "";
    printf("%zu\n", ft_strcspn(a,b));
    printf("%zu\n", strcspn(a,b));
}
