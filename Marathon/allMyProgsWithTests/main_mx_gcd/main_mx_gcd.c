#include <stdio.h>

int mx_gcd(int a, int b);

int main(void) {
    int a;
    int b;
    a = 20;
    b = 15;
    printf("gcd(%d, %d)=%d\n", a, b, mx_gcd(a, b));

    a = -20;
    b = -15;
    printf("gcd(%d, %d)=%d\n", a, b, mx_gcd(a, b));

    a = 24;
    b = 54;
    printf("gcd(%d, %d)=%d\n", a, b, mx_gcd(a, b));
    return 0;
}

