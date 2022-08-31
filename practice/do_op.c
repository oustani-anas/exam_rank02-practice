#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int a;
    int b;
    char op;

    if(ac == 4)
    {
        a = atoi(av[1]);
        b = atoi(av[3]);
        op = av[2][0];
        if(op == '+')
            printf("%d", a+b);
        else if(op == '*')
            printf("%d", a*b);
        else if(op == '-')
            printf("%d", a-b);
        else if(op == '/')
            printf("%d", a/b);
        else if(op == '%')
            printf("%d", a%b);
    }
    
}