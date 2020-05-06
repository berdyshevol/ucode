#include <stdio.h>

int mx_popular_int(const int *arr, int size);

int main(void) {
    int arr[] = {-2, 2, 2, -2, 2, -2};
    printf("Popular number =%d", mx_popular_int(arr, 6));
    return 0;
}
