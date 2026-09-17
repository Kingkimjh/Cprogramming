#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void)
{
	char c[100];

	printf("문자열을 입력하시오:");
	scanf("%s", c);

	for (int i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] = c[i] + 32;
		else if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}

	printf("변환결과:%s", c);

	return 0;
}
