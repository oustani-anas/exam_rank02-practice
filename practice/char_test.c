
#include <stdio.h>
int main()
{
    const char *p;
    char a = 'a';
    p = &a;
    *p = 'c';
    printf("%c\n", *p);
    // example 2
    char *q;
    char b = 'b';
    q = &b;
    *q = 'x';
    printf("%c\n", *q);
    // inverse exemple
    // char const *e;
    // char s = 'w';
    // e = &s;
    // *e = 'z';
    // printf("%c\n", *e);
}