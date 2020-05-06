#include <stdio.h>

char *mx_strchr(const char *str, int c) {
    char *s = (char *) str;
    while (*s) {
        if (*s == (char) c) {
            return s;
        }
        s++;
    }
    if (c == '\0') {
        return s;
    }
    return NULL;
}

