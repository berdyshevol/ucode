#include "nbr_to_hex.h"
#include <stdio.h>

char *mx_nbr_to_hex(unsigned long nbr);

int main(void) {
    unsigned long n = 1844674407370955161;
    printf("%lu->%s\n", n, mx_nbr_to_hex(n));
    return 0;
}

