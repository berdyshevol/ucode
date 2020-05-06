#include <stdio.h>
int mx_selection_sort(char **arr, int size);

int main(void) {
    char *arr[] = {"Z", "Abcd", "a", "aBc", "z", "abc", "AbCd"};
    //int count = 0;
    printf("%d\n", mx_selection_sort(arr, 7));
    for (int i = 0; i < 7; i++) {
        printf("%s||", arr[i]);
    }
    //printf("\ncount=%d\n",count);
    return 0;
}

