
#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main()
{
    printf("%d", swap_bits('A')); // 'A' = 01000001
    // 01010000
}