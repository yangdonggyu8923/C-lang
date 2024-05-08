#include <stdio.h>

void print(int args)
{
    printf("%d\n", args);
}

void plus()
{
    int a, b, c;
    printf("Input A, B\n");
    scanf("%d %d", &a, &b);
    c = a + b;
    print(c);
}

void sequence()
{
    // Sequence
    // 1 + 2 + 3 + ... + 10
    int i, j;
    i = 0;
    j = 0;
    do
    {
        i++;
        j += i;
    } while (i < 10);
    printf("1 + 2 + 3 + ... + 10 = %d", j);
}

int subfybctuib(int number)
{
    int i;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // plus();
    int number = 100, cnt = 0, i;
    for (i = 2; i < number; i++)
    {
        cnt += subfybctuib(i);
    }
    printf("There are %d prime numbers between 1 and %d.\n", cnt, number);
    return 0;
}
