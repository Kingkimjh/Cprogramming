// **********************************************
// 제 목 : 실습과제 4
// 날 짜 : 2026년 10월 29일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void my_strcat(char *str1, const char *str2);

int main(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	my_strcat(str1, str2);
	puts(str1);
	return 0;
}

void my_strcat(char *str1, const char *str2)
{
	while (*str1 != '\0')
		str1++;

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str2++;
		str1++;
	}

	*str1 = '\0';
}
