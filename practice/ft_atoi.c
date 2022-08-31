
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_atoi(const char *str)
{
    int     i = 0;
    int     result = 0;
    int    sign = 1;

    while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' 
            || str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')    
            sign *= -1;
        i++;
    }  
    while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}
// int main()
// {
//     char a[] = "  -42";
//     printf("%d\n", ft_atoi(a));
//     printf("%d", atoi(a));
// }