#include <stdio.h>
#include <stdbool.h>

bool equal_nums(int a, int b) {
return a == b;
}

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int));
int main(void) {
  
  int arr[] = {1, 2, 3, 4, 5};
  printf("%d\n", mx_comparator(arr, 5, 3, equal_nums)); //returns 2
  printf("%d\n",mx_comparator(arr, 5, -1, equal_nums)); //returns -1

  return 0;
}


