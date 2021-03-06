#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *i2c_thread(void *data)
{
    printf("I2C init started\n");
    sleep(2);
    printf("I2C init completed\n");
}

void *eth_thread(void *data)
{
    printf("Eith init started\n");
    sleep(6);
    printf("Eth init completed\n");
}

void *Uart_thread(void *data)
{
    printf("Uart init started\n");
    sleep(3);
    printf("Uart init completed\n");
}


void *eeprom_thread(void * data)
{
    printf("eeprom init started\n");
    sleep(3);
    printf("eeprom init completed\n");
}

int main(int argc, char const *argv[])
{
    pthread_t i2c, Uart, eth, eeprom;

     pthread_create(&i2c, NULL, i2c_thread, NULL);
     pthread_create(&Uart, NULL, Uart_thread, NULL);
    pthread_create(&eth, NULL, eth_thread, NULL);
    pthread_create(&eeprom, NULL, eeprom_thread, NULL);
    pthread_join(i2c, NULL);
    pthread_join(Uart, NULL);
    pthread_join(&eth, NULL);
    pthread_join(eeprom, NULL);

    return 0;
}

