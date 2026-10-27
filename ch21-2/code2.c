// **********************************************
// 제 목 : 실습과제3
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}
int main(void)
{
	char name[7];
	char adress[18];
	char car[20];

	fputs("이름: ", stdout);
	fgets(name, sizeof(name), stdin);
	ClearLineFromReadBuffer();

	fputs("주소: ", stdout);
	fgets(adress, sizeof(adress), stdin);
	ClearLineFromReadBuffer();

	fputs("자동차번호: ", stdout);
	fgets(car, sizeof(car), stdin);

	printf("이름: %s\n", name);
	printf("주소: %s\n", adress);
	printf("자동차번호: %s\n", car);

	return 0;
}
