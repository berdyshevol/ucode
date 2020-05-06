#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool mx_isalpha(int c);

int main (void) {
    printf("start test\n");
    for (char c = 1; c <= 126; c++) {
        int f1 = mx_isalpha(c) ? 0 : 1;
        int f2 = isalpha(c) ? 0 : 1;
        if (f1 != f2) {
            printf(" found c=%d", c);
        }
    }
    printf("\nfinish test\n");
    printf("test Z isalpha - %d\n", isalpha('Z'));
    printf("test Z mx_isalpha - %d\n", mx_isalpha('Z'));
}
