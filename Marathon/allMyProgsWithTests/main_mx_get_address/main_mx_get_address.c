#include <stdio.h>
#include "get_address.h"

char *mx_get_address(void *p);

int main(void) {
    int n = 1;
    void *p = &n;
    printf("%s\n", mx_get_address(p));
    return 0;
}

