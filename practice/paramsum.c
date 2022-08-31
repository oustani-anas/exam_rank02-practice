
#include <unistd.h>

void ft_putnbr(int n){
    if(n > 10)
        ft_putnbr(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}
int main(int ac, char **av)
{
    ft_putnbr(ac - 1);
}