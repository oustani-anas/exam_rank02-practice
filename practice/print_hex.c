
#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
        || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = sign * -1;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10;
        result = result + str[i] - '0';
        i++;
    }
    return(result * sign);
}

void print_hex(int n)
{
    char hex[] = "0123456789abcdef";

    if(n >= 16)
        print_hex(n / 16);
    write(1, &hex[n % 16], 1);
}

int main(int ac, char **av)
{
    int i = 0;
    int n = ft_atoi(av[1]);
      
    if(ac == 2)
    {
        print_hex(n);
    }
    write(1, "\n", 1);
}