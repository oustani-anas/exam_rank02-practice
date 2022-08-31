#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int *p;
    int len;

    len = end - start;
    if(len < 0)
        len *= -1;
    len += 1;
    p = (int *)malloc(sizeof(int) * (len));
    if(!p)
        return(NULL);
    if(start > end)
        while(i <= len)
        {
            p[i] = start;
            start--;
            i++;
        }
    else
        while(i < len)
        {
            p[i] = start;
            start++;
            i++;
        }
    return(p);
}

// int main()
// {
// int start;
//     int end;
//     int i = 0;

//     printf("enter start : ");
// 	scanf("%d", &start);
//     printf("\nenter end : ");
// 	scanf("%d", &end);
	
// 	int *p;
//     p = ft_range(start, end);

//     while(i <= 4)
//     {
//         printf("%d\n", p[i]);
//         i++;
//     }
// }