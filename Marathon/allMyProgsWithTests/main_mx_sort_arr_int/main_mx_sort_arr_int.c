#include <stdio.h>

void mx_sort_arr_int(int *arr, int size);

int main(void) {
    int arr[] = {1, 5, 2, -1};
    mx_sort_arr_int(arr, 4);
    for (int i = 0; i < 4; i++)
        printf("%d, ", arr[i]);
    return 0;
}
