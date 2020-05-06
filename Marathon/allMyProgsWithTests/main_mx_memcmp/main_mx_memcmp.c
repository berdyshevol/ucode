#include "../libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n);

int main(void) {
    char *s1 = "12345";
    char *s2 = "1234 ";
    int n = 4;
    printf("\"%s\" and \"%s\" compare %d bytes->%d\n", s1, s2, n, mx_memcmp(s1, s2, n));
    n = 5;
    printf("\"%s\" and \"%s\" compare %d bytes->%d\n", s1, s2, n, mx_memcmp(s1, s2, n));
    printf("\"%s\" and \"%s\" compare %d bytes->%d\n", s2, s1, n, mx_memcmp(s2, s1, n));
    return 0;
}

