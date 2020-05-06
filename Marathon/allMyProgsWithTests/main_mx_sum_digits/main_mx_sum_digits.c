#include <stdio.h>

int mx_sum_digits(int num);

int main(void) {
    int num;

    num = 435;
    printf("%d sum of digits is %d\n", num, mx_sum_digits(num));

    num = -555;
    printf("%d sum of digits is %d\n", num, mx_sum_digits(num));
}
