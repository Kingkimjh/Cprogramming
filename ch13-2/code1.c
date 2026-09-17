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
		printf("%d번째문자 %c\n", i+1, c[i]);
	}
	return 0;
}
