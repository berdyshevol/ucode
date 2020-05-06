#include <stdio.h>

void f(void) {
  for (int i = 0; i < 10000; i++){}
}

double mx_timer(void (*f)());

int main(void) {
  printf("%f\n", mx_timer(f));
  return 0;
}


