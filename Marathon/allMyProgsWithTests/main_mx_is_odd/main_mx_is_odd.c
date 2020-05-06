#include <stdio.h>
#include <stdbool.h>

bool mx_is_odd(int value);

int main(void) {
    printf("1 - %d\n", mx_is_odd(1));
    printf("-1 - %d\n", mx_is_odd(-1));
    printf("0 - %d\n", mx_is_odd(0));
    printf("2 - %d\n", mx_is_odd(2));
}
