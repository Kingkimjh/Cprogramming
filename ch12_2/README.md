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
a의 값 -100 출력
```
printf("char형 변수 b의 값은: %c\n", *pb);
```
b의 값 'A' 출력
```
printf("double형 변수 c의 값은: %lf\n", *pc);
```
c의 값 3.14 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

### 실행결과
<img width="1108" height="184" alt="image" src="https://github.com/user-attachments/assets/680fc671-9015-43e8-b5a4-7383ec3fbd9e" />

----------
## 실습과제 3
<img width="750" height="250" alt="image" src="https://github.com/user-attachments/assets/6e06165f-c6aa-49f3-b673-9da81f27fccc" />

* 125를 정수형 데이터가 저장된 메모리 주소로 사용하기 위해
* 125를 강제로 메모리 주소로 변환해 그 주소에 데이터를 저장하려 했기 때문
----------
## 실습과제 4

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int a = 100, b = 200;
```
- a와 b라는 정수형 변수를 선언하고 각각 100과 200이라는 값을 저장
```
int sum;
```
- sum이라는 정수형 변수를 선언
```
int* c = &a;
```
- a의 주소를 c에 저장
```
int* d = &b;
```
- b의 주소를 d에 저장
```
sum = *c + *d;
```
- a의 값과 b의 값을 더한 뒤 sum에 저장
```
printf("두 정수의 합: %d\n", sum);
```
- a와 b의 합인 sum을 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/fb4fb623-6772-4d86-8f2b-5244b3ca940e" />

----------
## 실습과제 5

▼ 소스코드 설명
```
#include <stdio.h>
```
- scanf, printf, 등 여러가지 라이브러리가 들어있는 stdio.h를 포함해라.
```
int main(void)
```
- 메인함수 시작
```
int num1 = 10, num2 = 20, num3 = 30;
```
- 정수형 변수 num1, num2, num3을 선언하고 각각 10, 20, 30이라는 값을 저장
```
int *temp;
```
- 포인터 변수 temp를 선언
```
int* ptr1 = &num1;
```
- num1의 주소를 ptr1에 저장
```
int* ptr2 = &num2;
```
- num2의 주소를 ptr2에 저장
```
int* ptr3 = &num3;
```
- num3의 주소를 ptr3에 저장
```
*ptr1 += 10;
```
- *ptr1 = *ptr1 + 10;
```
*ptr2 -= 10;
```
- *ptr2 = *ptr2 - 10;
```
*ptr3 *= 2;
```
- *ptr3 = *ptr3 * 2;
```
temp = ptr1;
ptr1 = ptr2;
ptr2 = ptr3;
ptr3 = temp;
```
- ptr1, ptr2, ptr3이 가리키는 대상을 서로 바꿈
```
printf("ptr1이 가리키는 값: %d\n", *ptr1);
```
- ptr1이 가리키는 값 출력
```
printf("ptr2가 가리키는 값: %d\n", *ptr2);
```
- ptr2가 가리키는 값 출력
```
printf("ptr3이 가리키는 값: %d\n", *ptr3);
```
- ptr3이 가리키는 값 출력
```
return 0;
```
- 0을 반환하고 메인함수 정상 종료

▼ 실행결과
<img width="2350" height="1226" alt="image" src="https://github.com/user-attachments/assets/1cba956d-797e-4b97-9c68-99391d2355bd" />
