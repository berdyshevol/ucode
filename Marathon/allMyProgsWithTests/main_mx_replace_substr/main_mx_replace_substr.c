//#include "libmx.h"
#include <stdio.h>
#include <stdlib.h>
char *mx_replace_substr(const char *str, const char *sub, const char *replace);

int main(void) {
    char *s = mx_replace_substr("McDonalds", "alds", "uts");
    printf("%s\n", s);
    free(s);

    s = mx_replace_substr("Ururu turu", "ru", "ta");
    printf("%s\n", s);
    free(s);
    s = mx_replace_substr(" Ur ur u tu ru ", " ", "__");
    printf("%s\n", s);
    free(s);
    system("leaks -q a.out");
    return 0;
}

