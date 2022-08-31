

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details.
#include <pthread.h>
 
// A normal C function that is executed as a thread
// when its name is specified in pthread_create()
void *myThreadFun(void *vargp)
{
    puts("f1");
    sleep(3);
    printf("Printing from Thread \n");
    return NULL;
}
void *myThreadFun2(void *vargp)
{
    puts("f2");
    sleep(3);
    printf("Printing from Thread2222 \n");
    printf("jaydayoungan\n");
    sleep(2);
    puts("hello");
    return NULL;
}
  
int main(int ac, char **av)
{
    int i = 0;
    puts(av[0]);
}