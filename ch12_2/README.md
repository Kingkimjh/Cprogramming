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

