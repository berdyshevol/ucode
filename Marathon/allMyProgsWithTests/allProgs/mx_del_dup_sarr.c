#include "duplicate.h"

static bool isitem_in_temparr(int item, t_intarr *arr);

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (!src)
        NULL;
    if (src->size <= 0)
        return NULL;
    
    t_intarr *temp_arr = malloc(sizeof(t_intarr));
    if (temp_arr == NULL)
        return NULL;
    
    temp_arr->arr = malloc(src->size * sizeof(int));
    if (temp_arr->arr == NULL)
        return NULL;
    
    temp_arr->arr[0] = src->arr[0];
    temp_arr->size = 1;
    for (int i = 1; i < src->size; i++) {
        if (!isitem_in_temparr(src->arr[i], temp_arr)) {
            // push
            temp_arr->arr[temp_arr->size] = src->arr[i];
            temp_arr->size++;
        }
    }
    // make dst arr
    t_intarr *dst =malloc(sizeof(t_intarr));
    if (dst == NULL) return NULL;
    dst->arr = malloc(sizeof(int) * temp_arr->size);
    if (dst->arr == NULL) return NULL;  
    dst->size = temp_arr->size;
    dst->arr = mx_copy_int_arr(temp_arr->arr, temp_arr->size);
    free(temp_arr);
    return dst;
}

static bool isitem_in_temparr(int item, t_intarr *arr) {
     for (int i = 0; i < arr->size; i++) {
         if (item == arr->arr[i])
         return true;
     }
     return false;
}

