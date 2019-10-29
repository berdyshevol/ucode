#include "libmx.h"

static int my_min(int a, int b) {
    return a < b ? a : b;
}

void *mx_realloc(void *ptr, size_t size) {
    if (size == 0) {
        free(ptr);
        return NULL;
    }
    if (ptr == NULL)
        return malloc(size);
    
    int sz = my_min(size, malloc_size(ptr));
    void *p = malloc(size);
    if (p == NULL) return NULL;

    mx_memcpy(p, ptr, sz);
    free(ptr);
    return p;
}

