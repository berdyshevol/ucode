#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int mx_tolower(int c);

int main (void) {
    printf("start test\n");
    for (char c = 1; c <= 126; c++) {
        int f1 = mx_tolower(c);
        int f2 = tolower(c);
        if (f1 != f2) {
            printf(" found c=%d\n", c);
        }
    }
    printf("finish test\n");
    printf("d =%c\n", mx_tolower('d'));
    printf("D =%c\n", mx_tolower('D'));

}
