#include <stdio.h>
int mx_linear_search(char **arr, const char *s);

int main(void) {
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z", NULL};
    printf("%d\n", mx_linear_search(arr, "zz"));
    int i = 0;
    while (arr[i++])
        printf("%s||", arr[i]);
    return 0;
}

