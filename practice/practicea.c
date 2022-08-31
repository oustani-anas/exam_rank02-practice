
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10;
        result = result + str[i] - '0';
        i++;
    }
    return(result * sign);
}

void print_number(int n)
{
    char s[] = "0123456789";
    if(n > 9)
        print_number(n / 10);
    write(1, &s[n % 10], 1);
}

int is_prime(int n)
{
    int i = 2;
    while(i < n)
    {
        if(n%i == 0)
            return(0);
        i++;
    }
    return(1);
}

int main(int ac, char **av)
{
    int n = ft_atoi(av[1]);
    int i = 2;
    int som = 0;
 
    if(ac == 2)
    {
        while(i <= n)
        {
            if(is_prime(i)){
                som = som + i;
            }
            i++;
        }
        print_number(som);
    }
    write(1, "\n", 1);
}