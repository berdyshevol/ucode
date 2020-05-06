#include <stdio.h>

double mx_pow_rec(double n, unsigned int pow);

int main(void) {
    double n;
    unsigned int pow;

    n = 4;
    pow = 3;
    printf("%f ** %d = %f<>%f\n", n, pow, mx_pow(n, pow), mx_pow_rec(n, pow));

    n = 2.5f;
    pow = 3;
    printf("%f ** %d = %f<>%f\n", n, pow, mx_pow(n, pow), mx_pow_rec(n, pow));

    n = 2;
    pow = 0;
    printf("%f ** %d = %f<>%f\n", n, pow, mx_pow(n, pow), mx_pow_rec(n, pow));

    n = 5;
    pow = 4;
    printf("%f ** %d = %f<>%f\n", n, pow, mx_pow(n, pow), mx_pow_rec(n, pow));

    return 0;
}

