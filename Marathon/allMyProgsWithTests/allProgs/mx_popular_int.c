static int count(const int *arr, int size, int index);

int mx_popular_int(const int *arr, int size) {
    if (!arr)
       return 0;
    
    int pop_num = arr[0];
    int pop_num_count = 1;
    for (int i = 1; i < size; i++) {
        int c = count(arr, size, i);
        if (c > pop_num_count) {
            pop_num_count = c;
            pop_num = arr[i];
        }
    }
    return pop_num;
}

static int count(const int *arr, int size, int index) {
    int count = 0;
    for (int i = 0; i < size; i ++) {
        if (arr[index] == arr[i])
            count++;
    }
    return count;
}
