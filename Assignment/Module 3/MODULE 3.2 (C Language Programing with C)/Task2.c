//WAP to swap two numbers without using third variable
#include <stdio.h>
main() {
  int a, b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  a = a + b;   
  b = a - b;
  a = a - b;

  printf("After swapping, a = %d\n", a);
  printf("After swapping, b = %d", b);
}
