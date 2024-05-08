#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일
// import 확인하기
int main()
{
    bool b1 = true;
    if (b1 == true)        // b1이 true인지 검사
        printf("true\n");    // b1이 true이므로 참이 출력됨
    else
        printf("false\n");
    return 0;
}