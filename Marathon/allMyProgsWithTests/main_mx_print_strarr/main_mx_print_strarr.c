#include <stddef.h>
void mx_print_strarr(char **arr, const char *delim);

int main(void) {
    char *arr[] = {"Hello", "World", ",", "Oleg", "!", NULL};
    char *delim = "__";
    mx_print_strarr(arr, delim);
    return 0;
}

