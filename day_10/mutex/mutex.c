#include <stdio.h>
#include <pthread.h>

int count = 10;
pthread_mutex_t mutexCount;

void *inc_thread(void *arg)
{
    while (1)
    {
        // Lock
    pthread_mutex_lock(&mutexCount);

        count++;
        printf("IncThread: %d\n", count);
        pthread_mutex_unlock(&mutexCount);
        //Unlock
    }
}

void *dec_thread(void *arg)
{
    while (1)
    {
        //Lock
        count--;
        printf("DecThread: %d\n", count);
        pthread_mutex_unlock(&mutexCount);
        //Unlock
    }
}

int main(int argc, char const *argv[])
{
     pthread_t incID, decID;
     printf("Main thread: Before creating hello thread\n");
     pthread_create(&incID, NULL, inc_thread, NULL);
     pthread_create(&decID,NULL, dec_thread, NULL);

     pthread_join(incID, NULL);
     pthread_join(incID, NULL);
     pthread_mutex_destroy(&mutexCount);
     printf("Main thread: After creating hello thread\n");
     
     return 0;
}
