//#include "hex_to_nbr.h"

#include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex);

int main(void) {
  char num[] = "ffffffffffff";
  printf("%s->%lu\n", num, mx_hex_to_nbr(num));
  return 0;
}

