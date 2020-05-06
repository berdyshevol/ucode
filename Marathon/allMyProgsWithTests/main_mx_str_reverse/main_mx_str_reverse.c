#include <stdio.h>

void mx_str_reverse(char *s);

int main(void) {
    char str[] = "gam";
    printf("\"%s\" - ", str);
    mx_str_reverse(str);
    printf(" \"%s\" ", str);

    return 0;
}
