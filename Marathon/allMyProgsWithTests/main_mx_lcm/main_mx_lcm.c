#include <stdio.h>

int mx_lcm(int a, int b);

int main(void) {
    int a;
    int b;
    a = 16;
    b = 20;
    printf("gcd(%d, %d)=%d\n", a, b, mx_lcm(a, b));

    a = 20;
    b = 15;
    printf("gcd(%d, %d)=%d\n", a, b, mx_lcm(a, b));

    a = -20;
    b = 15;
    printf("gcd(%d, %d)=%d\n", a, b, mx_lcm(a, b));
    return 0;
}

