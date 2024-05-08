#include <stdio.h>

struct Person {
    char name[20];
    int age;
    char address[100];
};

int main()
{
    // name에는 "홍길동", age에는 30, address에는 "서울시 용산구 한남동", 생성자에 바로 넣는 것 . 추가해야함 = 컬럼명 명시
    struct Person p1 = { .name = "Hong", .age = 30, .address = "Seoul" };

    printf("name: %s\n", p1.name);       // 이름: 홍길동
    printf("age: %d\n", p1.age);        // 나이: 30
    printf("address: %s\n", p1.address);    // 주소: 서울시 용산구 한남동

    // name에는 "고길동", age에는 40, address에는 "서울시 서초구 반포동" = 컬럼이 순서대로 들어가게함
    struct Person p2 = { "Go", 40, "Seoul" };

    printf("name: %s\n", p2.name);       // 이름: 고길동
    printf("age: %d\n", p2.age);        // 나이: 40
    printf("address: %s\n", p2.address);    // 주소: 서울시 서초구 반포동

    return 0;
}