
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strpbrk( char *s1,char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char  a[] = "anans";
//     char b[] = "s";
// 	printf("%c\n", *ft_strpbrk(a,b));
// 	printf("%c", *strpbrk(a,b));
// }