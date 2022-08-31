
#include <stdio.h>
#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char mask;
    while(i--)
    {
        mask = (octet >> i & 1) + '0';
        write(1, &mask, 1);
    }
    
}

int main()
{
    print_bits('A');
}