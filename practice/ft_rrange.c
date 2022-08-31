#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int	*r;
	int	len;

	// len = (end >= start) ? end - start + 1 : start - end + 1;
	if(end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	if (!(r = (int*)malloc(sizeof(int) * len)))
		return (NULL);
		//  r[len] = (end >= start) ? start++ : start--;
	 while (len--)
	 {
		 if(end >= start)
		 	r[len] = start++;
		else
			r[len] = start--;
	 }
	return (r);
}

int main()
{
    int start = 0;
    int end = -3;
    int i = 0;
	int len = end - start + 1;
	if(len < 0)
		len *= len; 
    // printf("enter start : ");
	// scanf("%d", &start);
    // printf("\nenter end : ");
	// scanf("%d", &end);
	int *p;
	p = ft_rrange(start, end);

    while(i < len)
    {
        printf("%d\n", p[i]);
        i++;
    }
}