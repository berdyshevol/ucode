#include "../libmx.h"
#include <stdio.h>

void *mx_memset(void *b, int c, size_t len);

int main(void) {
    void *b = malloc(7);
    b = mx_memset(b, '!', 6);
    ((char *)b)[6] = '\0';
    printf("%s", (char *)b);
    return 0;
}

