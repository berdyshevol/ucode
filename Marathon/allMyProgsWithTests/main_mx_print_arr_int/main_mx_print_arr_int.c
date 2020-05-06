#include <stdio.h>

void mx_print_arr_int(const int *arr, int size);

int main(void) {
    int arr[] = {0, 1, 3, 4};
    mx_print_arr_int(arr, 4);

    return 0;
}
