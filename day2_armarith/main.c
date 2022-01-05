#include <stdio.h>

int main(int argc, char const *argv[])
{
    int result =0;
    result = add(30, 20, 10);
    printf("Addition: %d\n", result);

    result = sub(30, 20);
    printf("subtraction: %d\n", result);
    return 0;
}