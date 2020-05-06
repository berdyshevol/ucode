#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
//#include "duplicate.h"

int *mx_del_dup_arr(int *src, int src_size, int *dst_size);
//t_intarr *mx_del_dup_sarr(t_intarr *src);


int main(void) {
    int arr[] = {1, 2, 2, 3, 3, 4, 4, 4, 5, 1, 1, 2};
    int size;
    int *new_arr = mx_del_dup_arr(arr, 12, &size);
    for (int i = 0; i < size; i++) {
        printf("%d, ", new_arr[i]);
    }
    // printf("Using structures\n");
    // t_intarr my_struc;
    // my_struc.arr = arr;
    // my_struc.size = 12;

    // t_intarr *new_struc = mx_del_dup_sarr(&my_struc);
    // for (int i = 0; i < new_struc->size; i++) {
    //     printf("%d, ", new_struc->arr[i]);
    // }

    return 0;
}

