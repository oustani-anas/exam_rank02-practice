#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int count(int n)
{
	int i = 0;
	if(n <= 0)
	{
		i++;
		n = n * -1;
	}
	while(n)
	{
		i++;
		n = n / 10;
	}
	return(i);
}

char *itoa(int a)
{
	int nb;
	char *str;
	int len;

	len = count(a);
	nb = a;
	str = (char *)malloc(sizeof(char) * len + 1);
	if(!str)
		return(NULL);
	str[len] = '\0';
	if(nb < 0)
		nb = nb * -1;
	while(len--)
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if(a < 0)
		str[0] = '-';
	return(str);
}

int main()
{
	int a = -12;
	printf("%s", itoa(a));
}