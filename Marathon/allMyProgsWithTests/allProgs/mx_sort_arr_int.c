void mx_sort_arr_int(int *arr, int size) {
    if (!arr)
        return;
    
    for (int i = 0; i < size - 1; i++) {
        int m = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[m])
                m = j;
        }
        // swap i and m
        int t = arr[i];
        arr[i] = arr[m];
        arr[m] = t;
    }
}

