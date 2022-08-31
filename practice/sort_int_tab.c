
#include <stdio.h>


void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int main()
{
	int i = 0;
	int a[] = {1, 200, 20, -1, 600, 33};
	sort_int_tab(a, 6);
	while(i < 6)
	{
		printf("%d\n", a[i]);
		i++;
	}
}