//Write a program to print Fibonacci series up to 100
#include <stdio.h>
int main() 
{
  int a = 0, b = 1, n = 0;
  
  printf("Fibonacci Series upto 100 : %d, %d, ", a, b);
  n = a + b;

  while (n <=100) {
    printf("%d, ", n);
    a = b;
    b = n;
    n = a + b;
  }
  return 0;
}