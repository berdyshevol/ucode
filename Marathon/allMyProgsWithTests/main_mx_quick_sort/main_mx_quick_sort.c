#include <stdio.h>
int mx_quicksort(char **arr, int left, int right);

static void prt_arr(char **arr, int n) {
    printf("\narr={\'%s\'", arr[0]);
    for (int i = 1; i < n; i++) {
        printf(", \'%s\'", arr[i]);
    }
    printf("}\n");
}

int main(void) {
    printf("----------------\nTest quick sort\n");
    //char *arr[] = {"xyz", "abc", "ghi", "def"};
    char *arr[] = { "123456", "12", "12345", "12", "1234", "123", "123456"};
    //char *arr[] = {"1234567", "123456", "12345", "1234", "123", "12", "1"};
    //char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
  
    int n = 7;
    prt_arr(arr, n);
    int d = mx_quicksort(arr, 0, n-1);
    printf("result: %d\n", d);
    prt_arr(arr, n);
    return 0;
}

