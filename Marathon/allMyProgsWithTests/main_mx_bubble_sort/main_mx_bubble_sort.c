#include <stdio.h>
int mx_bubble_sort(char **arr, int size);

int main(void) {
    char *arr[] = {"abc", "xyz", "ghi", "def"};
    int n = 4;
    printf("%d\n", mx_bubble_sort(arr, n));
    for (int i = 0; i < n; i++) {
        printf("%s||", arr[i]);
    }
    return 0;
}

