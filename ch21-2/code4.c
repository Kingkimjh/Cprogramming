// **********************************************
// 제 목 : 실습과제5
// 날 짜 : 2026년 10월 27일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main(void)
{
	int cnt = 0;
	char str[50];
	fputs("문자열입력: ", stdout);
	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\n')
		{
			cnt += 1;
		}
	}

	printf("%d", cnt);

	return 0;
}
