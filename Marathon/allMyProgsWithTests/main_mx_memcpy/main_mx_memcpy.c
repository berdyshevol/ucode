#include "../libmx.h"
#include <stdio.h>

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main(void) {
    char *src = "Hello";
    void *dst = malloc(5);
    
    dst = mx_memcpy(dst, src, 4);
    ((char *)dst)[4] = '\0';
    printf("%s", (char *)dst);
    free(dst);
    return 0;
}

