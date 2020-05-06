#include "../libmx.h"

void *mx_realloc(void *ptr, size_t size);

int main(void) {
    // test p = NULL
    // test size = NULL
    // test malloc(100) < mx_realloc(ptr, 50)
    // test malloc(50) < mx_realloc(ptr, 100)
    void *p = malloc(1);
    *(char *)p = '#';
    void *pp = mx_realloc(p, 10);
    *((char *)p + 9) = '\0';
    printf("%s", pp);
    return 0;
}

