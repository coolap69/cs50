#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Hello there\n");
    int integer = 5 + 8;
    // 00000101 + 00001000 = 000001101;
    printf("This is my number: %i\n", integer);
    float flt = 5.3 + 4.83;
    printf("This is my float: %.20f\n", flt);
}