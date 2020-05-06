#include <stdio.h>
#include <stdbool.h>

bool mx_is_narcissistic(int num);
const int count_numofgigits(int num);

int main (void) {
    //printf("%d\n", count_numofgigits(10));
    printf("Task 09\n");
    int n;

    n = 3;
    printf("Is %d narciss? -%d\n", n, mx_is_narcissistic(n));

    n = -3;
    printf("Is %d narciss? -%d\n", n, mx_is_narcissistic(n));

    n = 10;
    printf("Is %d narciss? -%d\n", n, mx_is_narcissistic(n));

    n = 153;
    printf("Is %d narciss? -%d\n", n, mx_is_narcissistic(n));

    n = 154;
    printf("Is %d narciss? -%d\n", n, mx_is_narcissistic(n));

    n = 371;
    printf("Is %d narciss? -%d\n", n, mx_is_narcissistic(n));

    n = 372;
    printf("Is %d narciss? -%d\n", n, mx_is_narcissistic(n));

    return 0;
}
