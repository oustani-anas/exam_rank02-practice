
char *strchr(char *s1, char c)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == c);
            return(char *)s1;
        i++;
    }
    return(0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while(s[i])
    {
        if(strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return(i);
}
int main()
{
    char a[] = "oustani anas yb";
    char b[] = "ina";
    printf("%zu\n", strspn(a,b));
    printf("%zu", ft_strspn(a,b));
}
