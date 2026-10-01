#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	char s[4][10];

	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 문자열 입력: ", i+1);
		scanf("%s", &s[i][0]);
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (s[i][j])printf("최대값은 %d\n위치는%d행%d열", i + 1, j + 1);
		}
	}

	return 0;
}
