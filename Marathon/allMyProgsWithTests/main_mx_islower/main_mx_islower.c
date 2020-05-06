#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool mx_islower(int c);

int main (void) {
    printf("start test\n");
    for (char c = 1; c <= 126; c++) {
        int f1 = mx_islower(c) ? 0 : 1;
        int f2 = islower(c) ? 0 : 1;
        if (f1 != f2) {
            printf(" found c=%c\n", c);
        }
    }
    printf("finish test\n");
    printf("d =%d\n", mx_islower('d'));
    printf("D =%d\n", mx_islower('D'));

}
