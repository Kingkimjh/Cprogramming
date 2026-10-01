// **********************************************
// 제 목 : 2차원 배열 속 최대값과 위치 구하기
// 날 짜 : 2026년 10월 1일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main(void)
{
	int s[3][3] = { {-5, 2, 35}, {-20, 5, 100}, {-75, 5 ,-25} };

	int max = s[0][0];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (s[i][j] > max) max = s[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (s[i][j] == max) printf("최대값은 %d\n위치는%d행%d열",max,i+1,j+1);
		}
	}

	return 0;
}
