#include <stdio.h>
#include <unistd.h> // for sleep
#include "Island1.h"


int main()
{
    int glass = 0;
    printf("Story 1\n");
    sleep(1);
    printf("Story 2\n");

    glass += Island1(); //do return 2 ของวิเศษ
    printf("Glass : %d",glass);
}

