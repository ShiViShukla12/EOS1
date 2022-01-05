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


int main(int argc, char const *argv[])
{ 
    printf("Main thread: Before create hello thread\n");
    pthread_t helloID;   //hello thread
 
    pthread_create(&helloID, NULL, hello_thread, NULL);
    pthread_join(helloID, NULL);
    
    pthread_t byeID;    //bye thread
   
    pthread_create(&byeID, NULL, bye_thread, NULL);
    pthread_join(byeID, NULL);
  
    printf("Main thread: After create hello  thread\n");
    
    return 0;
}


