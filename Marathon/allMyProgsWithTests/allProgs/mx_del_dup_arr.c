#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

int *mx_copy_int_arr(const int *src, int size);

static bool isitem_in_temparr(int item, int *arr, int arr_size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (!src)
        NULL;
    if (src_size <= 0)
        return NULL;
    
    int *temp_arr = malloc(src_size * sizeof(int));
    if (temp_arr == NULL)
        return NULL;

    temp_arr[0] = src[0];
    int temp_arr_size = 1;
    for (int i = 1; i < src_size; i++) {
        if (!isitem_in_temparr(src[i], temp_arr, temp_arr_size)) {
            // push
            temp_arr[temp_arr_size] = src[i];
            temp_arr_size++;
        }
    }
    // make dst arr 
    *dst_size = temp_arr_size;
    int *p = mx_copy_int_arr(temp_arr, temp_arr_size);
    
    free(temp_arr);
    
    return p;
}

static bool isitem_in_temparr(int item, int *arr, int arr_size) {
     for (int i = 0; i < arr_size; i++) {
         if (item == arr[i])
         return true;
     }
     return false;
}

