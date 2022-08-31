
#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

// int main()
// {
//     char a = reverse_bits('A');
//     int i = 7;
//     while (i >= 0)
//     {
//         if (a >> i & 1)
//             write(1, "1", 1);
//         else
//             write(1, "0", 1);
//         i--;
//     }
     
// }