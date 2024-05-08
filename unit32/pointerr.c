#include <stdio.h>
#include <stdlib.h>

typedef struct Data
{
    char c;
    int *numPtr;
} Data;

int main()
{
    //괄호 채우기
    int num = 10;
    Data d1;
    Data *d2 = (Data *)malloc(sizeof(struct Data)); // new Data
        
    d1.numPtr = &num;   // & 인스턴스
    d2->numPtr = &num;  // -> = .set = 값 할당

    printf("%d\n", *d1.numPtr);
    printf("%d\n", *d2->numPtr);

    free(d2);
    return 0;


}