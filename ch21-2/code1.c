// **********************************************
// 제 목 : 실습과제2
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void)
{
	int a;

	while (1)
	{
		a = getchar();
		if (a == 'q' || a == 'Q') break;
		putchar(a);
	}
	return 0;
}
