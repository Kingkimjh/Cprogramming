// **********************************************
// 제 목 : 실습과제 2
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

void RemoveBSN(char str[]);
int my_strlen(char str[]);

int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	return 0;
}

int my_strlen(char str[])
{
	int cnt = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		cnt++;
	}
	return cnt;
}

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] ='\0';
}
