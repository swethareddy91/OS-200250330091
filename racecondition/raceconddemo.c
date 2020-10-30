#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int count = 0;
void *inc_thread(void *arg)
{
    while(1)
    {

        count++;
        printf("INC Thread: %d\n",count);
    }
}

void *dec_thread(void *arg)
{
    while(1)
    {

        count--;
        printf("DEC Thread: %d\n",count);
    }

}

int main()
{
    pthread_t tid_inc, tid_dec;
    printf("Before thread creation\n");
    pthread_create(&tid_inc, NULL, inc_thread, NULL);
    pthread_create(&tid_dec, NULL, dec_thread, NULL);

    pthread_join(tid_inc, NULL);
    pthread_join(tid_dec, NULL);
    return 0;

}
    
