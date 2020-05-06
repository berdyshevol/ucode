#include <stdio.h>

void mx_arr_rotate(int *arr, int size, int shift);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    mx_arr_rotate(arr, 5, 2); // arr = {4, 5, 1, 2, 3}
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    mx_arr_rotate(arr, 5, -2); // arr = {4, 5, 1, 2, 3}
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

