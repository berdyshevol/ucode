#include "../libmx.h"

void *mx_memrchr(const void *s, int c, size_t n);

int main(void) {
    printf("Test:mx_memrchr \n");
    char s[] = "6*4321";

    int c = '*';
    int n = 1;
    char *p = (char *)mx_memrchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);

    c = '*';
    n = 6;
    p = (char *)mx_memrchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);

    c = 'q';
    n = 6;
    p = (char *)mx_memrchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);
    
    c = 256+32+10;
    n = 1;
    p = (char *)mx_memrchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);

    c = 256+32+10;
    n = 3;
    p = (char *)mx_memrchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);
    //printf("%c\n", i);

    // c = '\0';
    // printf("%s - %c => %c\n", s, c, *mx_strchr(s, c));

    return 0;

}

