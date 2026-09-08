// **********************************************
// 제 목 : 변수 a, b, c의 주소를 출력하는 코드
// 날 짜 : 2026년 9월 3일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
char a = 'A';
int b = 36;
double c = 3.141592;

printf("char형 변수 a의 주소: %u\n", &a);
printf("int형 변수 b의 주소: %u\n", &b);
printf("double형 변수 c의 주소: %u\n", &c);

return 0;
}
