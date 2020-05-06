#include <stdio.h>

int mx_max(int a, int b, int c);

int main(void) {
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;
    printf("a=%d b=%d c=%d max=%d\n", a, b, c, mx_max(a, b, c));

    a = 1;
    b = 1;
    c = 3;
    printf("a=%d b=%d c=%d max=%d\n", a, b, c, mx_max(a, b, c));

    a = 1;
    b = 2;
    c = 2;
    printf("a=%d b=%d c=%d max=%d\n", a, b, c, mx_max(a, b, c));

    a = 3;
    b = 2;
    c = 1;
    printf("a=%d b=%d c=%d max=%d\n", a, b, c, mx_max(a, b, c));

    a = 3;
    b = 2;
    c = 2;
    printf("a=%d b=%d c=%d max=%d\n", a, b, c, mx_max(a, b, c));

    a = 3;
    b = 3;
    c = 2;
    printf("a=%d b=%d c=%d max=%d\n", a, b, c, mx_max(a, b, c));
}
