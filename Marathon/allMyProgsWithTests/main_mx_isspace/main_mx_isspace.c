#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool mx_isspace(char c);

int main (void) {
    printf("start test\n");
    for (char c = 1; c <= 126; c++) {
        int f1 = mx_isspace(c) ? 0 : 1;
        int f2 = isspace(c) ? 0 : 1;
        if (f1 != f2) {
            printf(" found c=%c\n", c);
        }
    }
    printf("finish test\n");
    printf("d =%d\n", mx_isspace('d'));
    printf("space =%d\n", mx_isspace(' '));

}
