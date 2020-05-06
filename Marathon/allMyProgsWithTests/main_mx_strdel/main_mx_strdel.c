#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);

int main(void) {
    char *s = malloc(10);
    char ** ss = &s;
    mx_strdel(ss);
    printf("%d", *ss == NULL);
    return 0;
}

