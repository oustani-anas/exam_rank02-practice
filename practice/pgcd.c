#include <stdio.h>

int pgcd(int a, int b)
{
    int i, gcd;
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return(gcd);
}

int main()
{
    int a, b;
    int gcd;
    
    printf("donner le premier nombre ");
    scanf("%d", &a);
    printf("donner le dexieme nombre ");
    scanf("%d", &b);
    
    gcd = pgcd(a, b);
    
    printf("pgcd(%d,%d) = %d",a,b,gcd);
    
    return 0;
    
}
