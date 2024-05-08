#include <stdio.h>
#include <stdlib.h>


void Swap(int a, int b);

int main()
{
    int x = 6, y= 96;
    int z = 0;
    printf("BEFORE SWAP : Max Number Between %d and %d \n", x, y);

    z = my_swap(x, y);

    printf("AFTER SWAP : Max Number Between %d and %d \n", z);
}