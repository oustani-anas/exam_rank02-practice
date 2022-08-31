#include <unistd.h>

void print_number(int a)
{
    char arr[10] = "0123456789";

    if(a > 9)
    print_number( a / 10);
    write(1, &arr[a % 10], 1);
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        if(i%5 == 0 && i%3 == 0)
            write(1, "fizzbuzz", 8);
        else if(i%5 == 0)
            write(1, "fizz", 4);
        else if(i%3 == 0)
            write(1, "buzz", 4);
        else
            print_number(i);
        write(1, "\n", 1);
        i++;    
    }
}