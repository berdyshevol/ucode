#include <stdio.h>
#include <math.h>

double mx_pow(double n, unsigned int pow);

int main(void) {
    double n;
    unsigned int pow;

    n = 4;
    pow = 3;
    printf("%f ** %d = %f\n", n, pow, mx_pow(n, pow));

    n = 2.5f;
    pow = 3;
    printf("%f ** %d = %f\n", n, pow, mx_pow(n, pow));

    n = 0;
    pow = 0;
    printf("%f ** %d = %f\n", n, pow, mx_pow(n, pow));

    n = 5;
    pow = 4;
    printf("%f ** %d = %f\n", n, pow, mx_pow(n, pow));

    return 0;
}

