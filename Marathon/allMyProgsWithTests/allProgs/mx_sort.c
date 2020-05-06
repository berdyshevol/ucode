#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
  for (int i = 0; i < size - 1; i ++) {
      int m = i;
      for (int j = i + 1; j < size; j++) {
        if (f(arr[m], arr[j]))
            m = j;
      }
      // swap m and i
      int t = arr[m];
      arr[m] = arr[i];
      arr[i] = t;
  }
}


