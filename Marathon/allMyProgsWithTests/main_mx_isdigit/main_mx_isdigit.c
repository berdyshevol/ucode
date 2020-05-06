#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool mx_isdigit(int c);

int main (void) {
    printf("start test\n");
    for (char c = 1; c <= 126; c++) {
        int f1 = mx_isdigit(c) ? 0 : 1;
        int f2 = isdigit(c) ? 0 : 1;
        if (f1 != f2) {
            printf(" found c=%c\n", c);
        }
    }
    printf("finish test\n");
    printf("d =%d\n", mx_isdigit('d'));
    printf("1 =%d\n", mx_isdigit('1'));

}
