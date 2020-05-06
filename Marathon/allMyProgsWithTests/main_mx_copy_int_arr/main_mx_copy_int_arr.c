#include <stdio.h>
int *mx_copy_int_arr(const int *src, int size);

int main(void) {
    int arr1[] = {1, 2, 3};
    int *arr2 = NULL;
    int *a1;
    int *a2;
    a1 = mx_copy_int_arr(arr1, 3); //returns array [1, 2, 3]
    a2 = mx_copy_int_arr(arr2, 3); //returns NULL
    for (int i = 0; i < 3; i++) {
        printf("%d, ", a1[i]);
    }
}

