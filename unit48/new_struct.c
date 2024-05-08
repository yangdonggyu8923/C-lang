#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

struct Person {           // struct는 class
    char name[20];        // 이름 [] = *, 20자 안으로 써라
    int age;              // 나이 아무것도 없으니 직접 넣어라, 값을 인풋 할당하려면 *
    char address[100];    // 주소
};

int main()
{
    struct Person p1;     // 구조체 변수 선언 = new

    // 점으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "Hong");
    p1.age = 30;
    strcpy(p1.address, "Seoul");

    // 점으로 구조체 멤버에 접근하여 값 출력
    printf("name: %s\n", p1.name);       // 이름: 홍길동
    printf("age: %d\n", p1.age);        // 나이: 30
    printf("address: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

    return 0;
}