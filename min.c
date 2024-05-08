#include <stdio.h>

void print(int args)
{
    printf("%d\n", args);
}

void get_min()
{
    int num[5] = {70, 60, 55, 90, 85};
    int min = 9999;
    int i;
    for (i = 0; i < 5; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }
    printf("The minimum value of the elements of array %d is %d.", num, min);
}

int main()
{
    get_min();
    return 0;
}