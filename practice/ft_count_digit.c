#include <stdio.h>

size_t	ft_count_digit(long long int n)
{
	size_t	c;

	if (n == 0)
		return (1);
	c = 0;
	if (n < -9223372036854775807)
	{
		c++;
		n = n / 10;
	}
	if (n < 0)
	{
		n = -n;
		c++;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

int main()
{
    printf("%zu", ft_count_digit(1000));
}