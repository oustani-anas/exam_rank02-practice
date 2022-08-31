

// // void	wdmatch(char *str, char *charset)
// // {
// // 	int i = 0;
// // 	while (str[i] != '\0')
// // 	{
// // 		while (*charset != str[i] && *charset != '\0')
// // 			++charset;
// // 		if (*charset == '\0')
// // 			return;
// // 		++i;
// // 		++charset;
// // 	}
// // 	write(1, str, i);
// // }
// // int		main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		wdmatch(argv[1], argv[2]);

// 	write(1, "\n", 1);
// 	return (0);
// }

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    wdmatch(char *s1, char *charset)
{
    int i = 0;
    int j = 0;

    while(s1[i])
    {
        while(charset[j])
        {
            while(s1[i] == charset[j])
            {
                i++;
                j++;
            if(s1[i] == '\0')
                write(1, s1, i);
            else if(charset[j] == '\0')
                return;
            }
            j++;
        }
        i++;
    }
    return;
}
int main(int ac, char **av)
{
    
    if(ac == 3)
    {
        wdmatch(av[1], av[2]);
    }
    write(1, "\n", 1);
}