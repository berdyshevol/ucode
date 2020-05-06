#include <stdio.h>
#include <stdbool.h>

bool mx_is_prime(int num);

int main(void) {
    int n;

    n = 1;
    printf("Is %d prime - %d\n", n, mx_is_prime(n));

    n = 2;
    printf("Is %d prime - %d\n", n, mx_is_prime(n));

    n = 3;
    printf("Is %d prime - %d\n", n, mx_is_prime(n));

    n = 4;
    printf("Is %d prime - %d\n", n, mx_is_prime(n));

    n = 5;
    printf("Is %d prime - %d\n", n, mx_is_prime(n));

    n = 41;
    printf("Is %d prime - %d\n", n, mx_is_prime(n));
  
    return 0;

}
