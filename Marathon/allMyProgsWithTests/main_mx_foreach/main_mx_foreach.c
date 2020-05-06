#include <stdio.h>

void mx_printint(int n);
void mx_foreach(const int *arr, int size, void (*f)(int));

int main(void) {
  printf("Hello World\n");
  int arr[] = {1, 2, 3, 4, 5};
  mx_foreach(arr, 5, mx_printint);
  return 0;
}


