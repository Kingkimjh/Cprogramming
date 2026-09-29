// **********************************************
// 제 목 : 5개의 정수를 입력 받아 배열에 저장하는 코드
// 날 짜 : 2026년 9월 29일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void get_data(int* arr, int len);

int main(void)
{
	int i, data[5];

	get_data(data, 5);

	for (i = 0; i < 5; i++)
		printf("%d번째 data:%d\n", i + 1, data[i]);
	return 0;
}

void get_data(int* arr, int len)
{

	for (int i = 0; i < len; i++)
	{
		printf("%d번째 data를 입력하시오: ", i + 1);
		scanf("%d", arr+i);
	}

}
