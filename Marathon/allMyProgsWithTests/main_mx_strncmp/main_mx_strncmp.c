#include <stdio.h>

int mx_strncmp(const char *s1, const char *s2, int n);

int main(void) {
    char s[] = "djdjheghel";
    char ss[] = "hel";
    printf("%d\n", mx_strncmp(s, s, 10));
    printf("%d\n", mx_strncmp(s, ss, 10));
    printf("%d\n", mx_strncmp(s, ss, 1));
    printf("%d\n", mx_strncmp(s, ss, 6));
    return 0;
}
