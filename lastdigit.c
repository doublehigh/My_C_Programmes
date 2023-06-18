#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* Get the last digit of numbers */

int main(void)
{
    int c, b;

    b = 1234567;
    c = b%10;
    printf("last digit of %d is %d \n", b,c);
    return (0);
}
