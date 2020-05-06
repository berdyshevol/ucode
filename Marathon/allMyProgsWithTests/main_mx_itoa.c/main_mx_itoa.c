#include <stdio.h>
char *mx_itoa(int nbr);

int main(void) {
    int n = 1234567890;
    printf("%d->%s\n", n, mx_itoa(n));

    n = 0;
    printf("%d->%s\n", n, mx_itoa(n));

    n = -1234567890;
    printf("%d->%s\n", n, mx_itoa(n));

    n = -2147483648;
    printf("%d->%s\n", n, mx_itoa(n));

    n = 2147483647;
    printf("%d->%s\n", n, mx_itoa(n));
    return 0;
}
