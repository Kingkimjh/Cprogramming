## 실습과제1
- **아래의 변수가 그림처럼 메모리가 할당될 때 다음 표의 빈칸을 채우시오.**
```
char ch = ‘A’;
int in = 10;
double db = 3.4;
```
<img width="199" height="546" alt="image" src="https://github.com/user-attachments/assets/5732ab50-65b7-4005-b3ab-fb81b7f2a817" />

|수식|결과값|결과값의 자료형|
|:--:|:--:|:--:|
|&ch|100|ch*|
|&in|101|in*|
|&db|105|db*|
|*&ch|A|char|
|*&in|10|int|
|*&db|3.4|double|

## 실습과제2
- **아래 코드에서 변수이름을 사용하지 말고 포인터를 사용하여 같은 결과가 나오도록 코드를 수정하시오.**
### 소스코드
```
#include <stdio.h>
int main(void)
{
  int a = -100;
  char b = 'A';
  double c = 3.14;
  printf("int형 변수 a의 값은: %d\n", a);
  printf("char형 변수 b의 값은: %d\n", b);
  printf("double형 변수 c의 값은: %d\n", c);
  return 0;
}
```
### 실행결과
```
int형 변수 a의 값은: -100
char형 변수 b의 값은: A
double형 변수 c의 값은: 3.14
```
### 수정된 소스코드설명
```
#include <stdio.h>
```
- printf,scanf 등 라이브러리 함수의 선언을 포함하고 있는 헤더파일 stdio.h을 포함하라
```
int main(void)
```
- 메인함수 시작
```
int a = -100;
```
int형 변수 a에 '-100'값을 저장
```
char b = 'A';
```
char형 변수 b에 'A'를 저장
```
double c = 3.14;
```
double형 변수 c에 '3.14'를 저장
```
int* pa = &a;
```
변수 a의 주소값을 포인터 변수 pa에 저장
```
char* pb = &b;
```
변수 b의 주소값을 포인터 변수 pb에 저장
```
double* pc = &c;
```
변수 c의 주소값을 포인터 변수 pc에 저장
```
printf("int형 변수 a의 값은: %d\n", *pa);
```

```
printf("char형 변수 b의 값은: %c\n", *pb);
```
```
printf("double형 변수 c의 값은: %lf\n", *pc);
```
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료
<img width="1108" height="184" alt="image" src="https://github.com/user-attachments/assets/680fc671-9015-43e8-b5a4-7383ec3fbd9e" />

