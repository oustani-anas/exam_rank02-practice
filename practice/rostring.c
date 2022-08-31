
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
# define WL 1000000
# define NW 1000000

void ft_putstr(char *str)
{
    int i = 0;

    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char **ft_split(char *str)
{
    char **tab;
    int i = 0;
    int j = 0;
    int k;

    if(!str)
        return(NULL);
    tab = (char **)malloc(sizeof(char **) * NW);
    if(!tab)
        return(NULL);
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            k = 0;
            tab[j] = (char *)malloc(sizeof(char) * WL);
            if(!tab[j])
                return(NULL);
            while((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
            {
                tab[j][k] = str[i];
                i++;
                k++;
            }
            tab[j][k] = 0;
            j++;
        }
        else
            i++;

    }
    tab[j] = 0;
    return(tab);
}

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    char **t;
    
    if(ac > 1)
    {
        t = ft_split(av[1]);
        while(t[i])
        {
            ft_putstr(t[i]);
            write(1, " ", 1);
            i++;
        }
        ft_putstr(t[0]);
    }
    else
        write(1, "\n", 1);
}