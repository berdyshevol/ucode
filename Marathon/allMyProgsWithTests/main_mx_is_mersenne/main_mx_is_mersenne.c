#include <stdio.h>
#include <stdbool.h>

bool mx_is_mersenne(int n);

int main(void) {
    printf("Test 11\n");
    int n;

    n = 1;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 2;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 3;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 4;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 5;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 6;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 7;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 31;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 127;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 8191;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 131071;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 524287;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 2147483647;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));

    n = 2147483647;
    printf("%d is mers - %d\n", n, mx_is_mersenne(n));
    return 0;
}
