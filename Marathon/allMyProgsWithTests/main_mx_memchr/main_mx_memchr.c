#include "../libmx.h"

void *mx_memchr(const void *s, int c, size_t n);

int main(void) {
    printf("Test:mx_memchr \n");
    char s[] = "1*3456";

    int c = '*';
    int n = 3;
    char *p = (char *)mx_memchr(s, c, n);
    printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);

    c = '*';
    n = 1;
    p = (char *)mx_memchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);

    c = 'q';
    n = 3;
    p = (char *)mx_memchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);
    
    c = 256+32+10;
    n = 1;
    p = (char *)mx_memchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);

    c = 256+32+10;
    n = 3;
    p = (char *)mx_memchr(s, c, n);
    if (p != NULL)
        printf("%s - %c in %d bytes -> %c\n", s, c, n, *p);
    else printf("%s - %c in %d bytes -> NULL\n", s, c, n);
    //printf("%c\n", i);

    // c = '\0';
    // printf("%s - %c => %c\n", s, c, *mx_strchr(s, c));

    return 0;

}

