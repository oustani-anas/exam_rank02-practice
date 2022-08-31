

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


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

void f_prime(char *str)
{
    int n = atoi(str);
    int i = 2;
    int first = 1;
    
    if(n == 1)
        printf("1");
    while(i <= n)
    {
        if(n%i == 0 && is_prime(i))
        {
            if(first == 1)
                printf("%d", i);
            else
                printf("*%d", i);
            first = 0;
            n = n / i;
        }
        else
            i++;
    }
}

int main(int ac, char **av)
{

    if(ac == 2)
    {
        f_prime(av[1]);
    }
    printf("\n");
}