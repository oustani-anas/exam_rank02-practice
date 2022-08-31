
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
# define WD_NUM 1000
# define WD_LEN 1000

void ft_putstr(char *str)
{
	int i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	**ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **tab;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	tab = (char**)malloc(sizeof(**tab) * WD_NUM);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k = 0;
			tab[j] = (char*)malloc(sizeof(char) * WD_LEN);
			while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

int main(int ac, char **av)
{
	char **ret;
	int j = 0;
	if(ac == 2)
	{
		ret = ft_split(av[1]);
		while(ret[j])
		{
			j++;
		}
		j--;
		while(j > 0)
		{
			ft_putstr(ret[j]);
			write(1, " ", 1);
			j--;
		}
		ft_putstr(ret[0]);	
	}
	write(1, "\n", 1);
}