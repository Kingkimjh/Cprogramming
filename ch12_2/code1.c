#include <stdio.h>

int main(void)
{
  int a = -100;
  char b = 'A';
  double c = 3.14;

  int*pa = &a
  char*pb = &b
  double*pc = &c

  print("int형 변수 a의 값은: %d\n", *pa)
  print("char형 변수 b의 값은: %c\n", *pb)
  print("double형 변수 c의 값은: %lf\n", *pc)

  return 0;
}
