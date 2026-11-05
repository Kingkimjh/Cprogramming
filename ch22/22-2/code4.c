// **********************************************
// 제 목 : 실습과제 4
// 날 짜 : 2026년 11월 5일
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

struct triangle
{
	struct point p[3];
};

int main(void)
{
	struct triangle pnt;
	int line[3];

	for (int i = 0; i < 3; i++)
	{
		printf("%d번째 점(x,y) 입력: ", i+1);
		scanf("%d %d", &pnt.p[i].x, &pnt.p[i].y);
	}

	line[0] = (((pnt.p[1].x - pnt.p[0].x) * (pnt.p[1].x - pnt.p[0].x)) + 
		((pnt.p[1].y - pnt.p[0].y) * (pnt.p[1].y - pnt.p[0].y)));

	line[1] = (((pnt.p[2].x - pnt.p[1].x) * (pnt.p[2].x - pnt.p[1].x)) + 
		((pnt.p[2].y - pnt.p[1].y) * (pnt.p[2].y - pnt.p[1].y)));

	line[2] = (((pnt.p[0].x - pnt.p[2].x) * (pnt.p[0].x - pnt.p[2].x)) + 
		((pnt.p[0].y - pnt.p[2].y) * (pnt.p[0].y - pnt.p[2].y)));

	if ((line[1] + line[2] == line[0]) || (line[0] + line[2] == line[1]) || (line[1] + line[0] == line[2]))
		printf("삼각형은 직각삼각형임");

	else
		printf("삼각형은 직각삼각형아님");

	return 0;

}
