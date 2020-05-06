void mx_printchar(char c);

static void print_row(char *char_arr, int *times_arr, int size);

void mx_cube(int n) {
    if (!(n > 1))
        return;
    print_row(" +-+", (int []) {n / 2 + 1, 1, 2 * n, 1}, 4); 
    for (int i = 0; i < n / 2; i++) {
        print_row(" / / |",
                  (int []) {n / 2 - i, 1, 2 * n, 1, i, 1}, 6);
    }
    print_row("+-+ |", (int []) {1, 2 * n, 1, n / 2, 1}, 5);
    for (int i= 0; i < n - n / 2 - 1; i++) {
        print_row("| | |", (int []) {1,  2 * n, 1, n / 2, 1}, 5);
    }
    print_row("| | +", (int []) {1, 2 * n, 1, n / 2, 1}, 5);
    for (int i = 0; i < n / 2; i++) {
        print_row("| | /",
                  (int []){1, 2 * n, 1, n / 2 - i - 1, 1}, 5);
    }
    print_row("+-+", (int []) {1, 2 * n, 1}, 3);
}

// prints row according to template in char_arr times_arr
static void print_row(char *char_arr, int *times_arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < times_arr[i]; j++) {
            mx_printchar(char_arr[i]);
        }
    }
    mx_printchar('\n');
}

