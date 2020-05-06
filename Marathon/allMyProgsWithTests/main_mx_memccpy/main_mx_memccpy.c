#include "../allProgs/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int main(void) {
    
    char *s = "HelloWorld";
    void *d = malloc(10);
    ((char *)d)[6] = '\0';
    char chr = 'o';
    void *p = mx_memccpy(d, s, chr, 6);
    printf("Test mx_memccpy\n");
    printf("des=%s\n", d);
    if (p == NULL)
        printf("memccpy retured NULL");
    else printf("memccpy retured: %ul\n", chr, p);
    free(d);
    system("leaks -q a.out");
    return 0;
}

