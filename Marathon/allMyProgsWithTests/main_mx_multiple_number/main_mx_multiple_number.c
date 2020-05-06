#include <stdio.h>
#include <stdbool.h>

bool mx_multiple_number(int n, int mult);

int main(void) {
    printf("3 and 9 - %d\n", mx_multiple_number(3, 9));
    printf("3 and 10 - %d\n", mx_multiple_number(3, 10));
}
