#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
//int data = 10;
int count = 0;
int add(int a ,int b)
{
    return a + b;
}
void* thread(void *arg)
{
    add(10,20);
    count++;

printf("Thread\n");
}
int main(int argc, char const *argv[])
{

pthread_t tid;
add(40,50);
count++;
printf("Before thread creation\n");
pthread_create(&tid, NULL,thread,NULL);
//printf("Data %d\n",data);
return 0;
}