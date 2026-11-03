// **********************************************
// 제 목 : 실습과제 4
// 날 짜 : 2026년 11월 3일
// 작성자 : 2600055 김준혁
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	double width, height;

	printf("좌측상단의 자표 입력: ");
	scanf("%d%d", &p1.x, &p1.y);
	printf("우측하단의 자표 입력: ");
	scanf("%d%d", &p2.x, &p2.y);

	width = (p2.x - p1.x);
	if (width < 0) width *= -1;
	height = (p1.y - p2.y);
	if (height < 0) height *= -1;

	printf("사각형의 폭: %lf", width);
	printf("사각형의 높이: %lf", height);
}
