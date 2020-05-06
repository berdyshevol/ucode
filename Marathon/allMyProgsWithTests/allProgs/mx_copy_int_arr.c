#include <stdlib.h>
#include <stddef.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (!src)
        return NULL;
    int *p = malloc(size * sizeof(int));
    if (p)
        for (int i = 0; i < size; i++) {
            p[i] = src[i];
        }
    return p;
}

