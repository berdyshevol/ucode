#include <stdio.h>

char *mx_strndup(const char *s1, size_t n);

int main(void) {
    char *s = mx_strndup("Hello world", 4);
    printf("%s", s);
    printf("\n");
    char *ss = mx_strndup("Hello world", 40);
    printf("%s", ss);
    return 0;
}

