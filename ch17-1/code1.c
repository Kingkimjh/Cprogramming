// **********************************************
// 제 목 : 포인터배열에서 함수로 최댓값 구하기
// 날 짜 : 2026년 10월6일
// 작성자 : 2600055 김준혁
// **********************************************

#include <stdio.h>
int get_max(int arr[], int x);

int main(void)
{
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;
	max = get_max(ptrarr, 3); 
	printf("최댓값:%d\n", max);
	return 0;
}

int get_max(int** arr[], int x)
{
	int max = *arr[0];

	for (int i = 0; i >= x; i++)
	{
		if (*arr[i] > max)
		{
			max = *arr[i];
		}
	}
	return max;
}
