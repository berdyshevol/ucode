static void move_right(int *arr, int size);
static void move_left(int *arr, int size);

void mx_arr_rotate(int *arr, int size, int shift) {
    if (!arr) return;
    if (size <= 1) return;
    if (shift > 0)
        for (int i = 0; i < shift; i++)
            move_right(arr, size);
    if (shift < 0)
        for (int i = 0; i < -shift; i++)
            move_left(arr, size);
}

static void move_right(int *arr, int size) {
    int t = arr[size - 1];
    int i = size - 1;
    while(i > 0) {
        arr[i] = arr[i-1];
        i--;
    }
    arr[0] = t;
}

static void move_left(int *arr, int size) {
    int t = arr[0];
    int i = 0;
    while(i < size - 1) {
        arr[i] = arr[i + 1];
        i++;
    }
    arr[size - 1] = t;
}

