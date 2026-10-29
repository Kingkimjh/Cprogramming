// **********************************************
// 제 목 : 실습과제 5
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main(void)
{
	char top[50] = "";
	char bottom[50] = "";
	char str[5][50];

	for (int i = 0; i != 5; i++)
	{
		printf("문자열 입력: ");
		fgets(str[i], sizeof(str), stdin);

		str[i][strcspn(str[i], "\n")] = '\0';
	}

	strcpy(top, str[0]);
	strcpy(bottom, str[0]);

	for (int j = 1; j != 5; j++)
	{
		if (strcmp(str[j], top) < 0)
		{
			strcpy(top, str[j]);
		}

		if (strcmp(str[j], bottom) > 0)
		{
			strcpy(bottom, str[j]);
		}
	}
	printf("제일앞: %s\n", top);
	printf("제일뒤: %s", bottom);

	return 0;
}
