
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count_digit(int d)
{
	int i = 0;
	if(d <= 0)
	{
		d = d * -1;
		i++;
	}
	while(d)
	{
		d = d / 10;
		i++;
	}
	return(i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	nb = n;
	len = count_digit(n);
	str = (char *) malloc(sizeof (char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb < 0)
		nb *= -1;
	while (len--)
	{
		str[len] = (nb % 10) + 48;
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int main()
{
	int a = -12;
	printf("%s", ft_itoa(a));
}