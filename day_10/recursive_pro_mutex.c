#include <stdio.h>
#include <pthread.h>

int count = 10;
pthread_mutex_t mutexCount;
pthread_mutex_t mutexCountAttr;

void square()
{
    pthread_mutex_lock(&mutexCount);
    count = count * count;
    pthread_mutex_unlock(&mutexCount);
}

void *inc_thread(void *arg)
{
    while (1)
    {
        // Lock
        printf("IncThread: Grabbing mutex\n");
    pthread_mutex_lock(&mutexCount);
    printf("IncThread: Inside CS\n");

        count++;
        square();
        printf("IncThread: %d\n", count);
        pthread_mutex_unlock(&mutexCount);
        printf("IncThread: Releasing mutex\n");
        //Unlock
    }
}

void *dec_thread(void *arg)
{
    while (1)
    {
        //Lock
        printf("DecThread: Grabbing mutex\n");
        pthread_mutex_unlock(&mutexCount);
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

     pthread_mutexattr_init(&mutexCountAttr);
     pthread_mutexattr_settype(&mutexCountAttr, PTHREAD_MUTEX_RECURSIVE);

     pthread_mutex_init(&mutexCount,NULL);
     pthread_create(&incID, NULL, inc_thread, NULL);
     pthread_create(&decID,NULL, dec_thread, NULL);

     pthread_join(incID, NULL);
     pthread_join(decID, NULL);
     pthread_mutex_destroy(&mutexCount);
     printf("Main thread: After creating hello thread\n");
     
     return 0;
}
