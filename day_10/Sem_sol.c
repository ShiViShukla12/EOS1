#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

int count = 10;
sem_t semCount;

void *inc_thread(void *arg)
{
    while (1)
    {
        sem_wait(&semCount);
        count++;
        printf("IncThreadL: %d\n", count);
        sem_post(&semCount);
    }
}
void *dec_thread(void *arg)
{
    while (1)
    {
        sem_wait(&semCount);
        count--;
        printf("DecThread: %d\n", count);
        sem_post(&semCount);
        
    }
}

int main(int argc, char const *arg[])
{
    pthread_t incID, decID;
    printf("Main thread: Before creating hello thread\n");
    sem_init(&semCount, 0, 1);
    pthread_create(&incID, NULL, inc_thread, NULL);
    pthread_create(&decID, NULL, dec_thread, NULL);
    pthread_join(decID, NULL);
    pthread_join(decID, NULL);
    printf("Main thread: After creating hello thread\n");
    sem_destroy(&semCount);
    return 0;
}
