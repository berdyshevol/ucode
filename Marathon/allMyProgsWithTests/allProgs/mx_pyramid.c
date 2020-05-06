void mx_printchar(char c);
static void print_row(char *char_arr, int *times_arr, int size);

void mx_pyramid(int n) {
    if (!(n > 1) || n % 2 != 0)
        return;
    // section 1
    print_row(" /\\", (int []) {n - 1, 1, 1}, 3);
    // section 2
    for (int i = 0; i < n - n / 2 - 1; i++) {
        int t[6] =  {n - 2 - i, 1, 2 * (i + 1) - 1, 1, i + 1, 1};
        print_row(" / \\ \\", t, 6);
    }
    // section 3
    for (int i = 0; i < n / 2 - 1; i++) {
        int t[6] =  {n / 2 - i - 1, 1, 
                     2 * (i + 1 - 1 + n - n / 2 -1) + 1, 1,
                     n - n / 2 - 1 - i, 1};
        print_row(" / \\ |", t, 6);
    }
    // section 4
    print_row("/_\\|", (int []){1, 2 * n - 3, 1, 1}, 4);
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

