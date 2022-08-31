
#include <stdio.h>

int    lcm(unsigned int a, unsigned int b)
{
    int lc = 0, n;
    int i, j;

    if(a >= b)
        n = a;
    else
        n = b;
    if(a == 0 || b == 0)
        return(0);
    i = 1;
    while((j <= n && i <= n))
    {
        j = 1;
        while((a*i) == (b*j))
        {
            lc = a*i;
        }
        j++;
    }
    i++;
    return (lc);
}

int main()
{
    int a = 4;
    int b = 6;
    int d = lcm(a,b);

    printf("%d\n",d);
}