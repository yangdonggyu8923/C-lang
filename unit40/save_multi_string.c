#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char s1[10];    // 크기가 10인 char형 배열을 선언
    char s2[10];    // 크기가 10인 char형 배열을 선언

    printf("문자열을 두 개 입력하세요: ");
    scanf("%s %s", s1, s2);    // 표준 입력에서 공백으로 구분된 문자열 두 개를 입력받음

    printf("%s\n", s1);    // s1의 내용을 출력
    printf("%s\n", s2);    // s2의 내용을 출력

    return 0;
    
}

// char s1[10], s2[10], s3[10], s4[10], s5[10];

// scanf("%s %s %s", s1, s2, s3);                  // 문자열 세 개 입력받기
// scanf("%s %s %s %s", s1, s2, s3, s4);           // 문자열 네 개 입력받기
// scanf("%s %s %s %s %s", s1, s2, s3, s4, s5);    // 문자열 다섯 개 입력받기