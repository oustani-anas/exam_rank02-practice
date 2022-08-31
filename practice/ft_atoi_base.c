
int ft_atoi_base(char *str, int str_base)
{
    int i;
    int n;
    int s;

    i = 0;
    n = 0;
    s = 1;
    if (str[i] == '-')
    {
        s = s * (-1);
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= (str_base - 1) + '0')
            n = n * str_base + str[i] - '0';
        else if (str_base > 10 && str[i] >= 'A' && str[i] <= (str_base - 11) + 'A')
            n = n * str_base + str[i] - 55;
        else if (str_base > 10 && str[i] >= 'a' && str[i] <= (str_base - 11) + 'a')
            n = n * str_base + str[i] - 87;
        else
            return (n * s);
        i++;
    }
    return (n * s);
}