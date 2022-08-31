
#include <unistd.h>

void	ft_union(char *str, char *str2)
{
	int	tab[256] = {0};
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (tab[(int)str[i]] == 0)
		{
			tab[(int)str[i]] = 1;
			write (1, &str[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (tab[(int)str2[i]] == 0)
		{
			tab[(int)str2[i]] = 1;
			write(1, &str2[i], 1);
		}
		i++;
	}
}

int	main (int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}