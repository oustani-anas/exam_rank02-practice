#include <stdio.h>

int		ft_atoi(char *str)
{
	int n = 0;

	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	return (n);
}
// int main()
// {
//     char a[] = "12";
//     int b = ft_atoi(a);
//     printf("%d", b);
// }