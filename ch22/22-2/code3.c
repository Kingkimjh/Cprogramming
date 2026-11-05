// **********************************************
// 제 목 : 실습과제 3
// 날 짜 : 2026년 11월 5일
// 작성자 : 2600055 김준혁
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

struct student {
	char name[20];
	int score;
};

int main(void)
{
	struct student list[3];
	struct student* p;

	for (int i = 0; i < 3; i++)
	{
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("성적을 입력하시오: ");
		scanf("%d", &list[i].score);
	}

	int max = 0;

	for (int j = 1; j < 3; j++)
	{
		if (strcmp(list[j].name, list[max].name) > 0)
			max = j;
	}

	p = &list[max];
	printf("이름은 %s, 성적은 %d점", p->name, p->score);

	return 0;
}
