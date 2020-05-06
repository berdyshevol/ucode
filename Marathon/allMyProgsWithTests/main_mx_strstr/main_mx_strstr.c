#include <stdio.h>

char *mx_strstr(const char *s1, const char *s2);

int main(void) {
    char *s = "kshjdskheghel----";
    char ss[] = "hel";
    printf("%s\n", mx_strstr(s, ss));
    return 0;
}
