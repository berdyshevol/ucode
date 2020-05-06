#include <stdio.h>
int mx_factorial_iter(int n);
int mx_factorial_rec(int n);

int main (void) {
    for (int i = -1; i <= 20; i++) {
        printf("%d->%d==%d\n", i, mx_factorial_iter(i), mx_factorial_rec(i));
    }
    return 0;
}

