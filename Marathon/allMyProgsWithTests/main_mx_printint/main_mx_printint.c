#include <stdio.h>

void mx_printchar(char c);

void mx_printint(int n);

int main(void) {
  int n;

  n = 123;
  printf("%d:\n", n);
  mx_printint(n);
  printf("\n----\n");

  n = -123;
  printf("%d:\n", n);
  mx_printint(n);
  printf("\n----\n");
}
