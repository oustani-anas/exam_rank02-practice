
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details.
#include <pthread.h>
 
// A normal C function that is executed as a thread
// when its name is specified in pthread_create()
pthread_mutex_t m;
int x = 0;
void *function()
{
    sleep(2);
    printf("%d\n", getpid());
    return(NULL);
}
void* myThreadFun(void *vargp)
{
    printf("%d\n", getpid());
    for(int i = 0; i < 10000000 ; i++){
    pthread_mutex_lock(&m);
        x++;
    pthread_mutex_unlock(&m);
    }
    return(0);
}
void *myfun(void *vargp)
{
    printf("Printing hello 222 from T2 \n");
    printf("%d\n", getpid());
    printf("%d\n", x);
    return NULL;
}
  
int main()
{
    pthread_t t1,t2;
    pthread_mutex_init(&m, NULL);
    pthread_create(&t1, NULL, myThreadFun, NULL);
    pthread_create(&t2, NULL, function, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("%d", x);
    exit(0);
}