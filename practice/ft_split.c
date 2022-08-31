
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
# define WD_NUM 1000
# define WD_LEN 1000

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
	ret = ft_split("oustani anas nba youngboy never broke again");

	while(ret[j])
	{
		printf("%s\n", ret[j]);
		j++;
	}
}