#include <stdio.h>
#include "macros.h"

int main(void) {
  int x = -1;
  int i = MX_SUM(x - 1, 3);
  printf("i=%d\n", i);

  i = MX_MULT(x - 1, 3);
  printf("i=%d\n", i);

  i = MX_MIN(2, 3);
  printf("i=%d\n", i);

  i = MX_ABS(-100);
  printf("i=%d\n", MX_ABS(-x - 100));

  i = MX_IS_ODD(x+100);
  printf("i=%d\n", MX_IS_ODD(x+100));

  return 0;
}


