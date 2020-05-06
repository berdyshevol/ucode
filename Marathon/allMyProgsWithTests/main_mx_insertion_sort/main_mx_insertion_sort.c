#include <stdio.h>
int mx_insertion_sort(char **arr, int size);

int main(void) {
    char *arr[] = {"abc", "ab", "aaaaa", "aaaa", "aaa"};
    //int count = 0;
    printf("%d\n", mx_insertion_sort(arr, 5));
    for (int i = 0; i < 5; i++) {
        printf("%s||", arr[i]);
    }
    //printf("\ncount=%d\n",count);
    return 0;
}

