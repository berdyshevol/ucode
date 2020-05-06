#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int main(void) {
    char s[] = "Hello";
    char ss[] = "Hello ";
    printf("%d\n", mx_strcmp(s, s));
    printf("%d\n", mx_strcmp(s, ss));
    printf("%d\n", mx_strcmp(ss, s));
}
