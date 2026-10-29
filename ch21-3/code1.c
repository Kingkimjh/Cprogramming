// **********************************************
// 제 목 : 실습과제 1
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[100];
	char str2[100] = "";

	while (1)
	{
		printf("문자열 입력: ");
		scanf("%s", str1);

		if (!strcmp(str1, "quit")) break;
		else
		{
			if (strlen(str2) > 0) strcat(str2, " ");
			strcat(str2, str1);
			printf("입력된 문자열:%s \n", str2);
		}
	}
}
