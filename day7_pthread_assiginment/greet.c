#include<stdio.h>
#include<pthread.h>

void *hello_thread(void *arg)
{
    printf("hello thread\n");
}
void *bye_thread(void *arg)
{
    printf("bye thread\n");
}
void *greet_thread(void *arg)
{
    printf("greet thread\n");
}
int main(int argc, char const *argv[])
{
    pthread_t helloID, byeID;
    printf("Main thread: Before create hello thread\n");

    pthread_create(&helloID, NULL, hello_thread, NULL);
    pthread_create(&byeID, NULL, bye_thread, NULL);
    pthread_join(helloID,NULL);
    pthread_join(byeID, NULL);

    printf("Main thread: After creating hello thread\n");

    return 0;
}