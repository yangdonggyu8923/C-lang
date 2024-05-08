#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
int main()
{
    int num1;   //할당 할때  받는쪽은 *  / 주는쪽은 &
    printf("Input Inteager: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
    printf("%d\n", num1);    // 변수의 내용을 출력
    return 0;
}
// scanf 함수는 표준 입력을 받아서 변수에 값을 저장하는 함수입니다.
// scanf 함수(큰따옴표 안에 서식 지정자,  입력 값을 저장할 변수)
// 여기서 주의할 점은 &num1처럼 변수 앞에 &를 붙여주어야 한다는 점입니다
// & 포인터 매개변수 사용 시에 사용하는 연산자입니다.
//     ↓ 첫 번째 인수
//scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
//              ↑ 두 번째 인수
//printf("%d\n", num1);    // 변수의 내용을 출력